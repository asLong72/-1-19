#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[72] = { NULL };
	int* num, b1 = 0, b2 = 1, n = 0;
	gets_s(a);
	for (int i = 0; a[i]; i++)
	{
		if ((a[i] >= '0' && a[i] <= '9') == true && b2 == 1)
		{
			b1 = 1;
			b2 = 0;
		}
		else if (((a[i + 1]) == false || (a[i] >= '0' && a[i] <= '9') == false) && b1 == 1)
		{
			b1 = 0;
			b2 = 1;
			n++;
		}
	}
	num = (int*)malloc(sizeof(int) * n);
	for (int i = 0, j = 0; j < n; j++)
	{
		num[j] = 0;
		for (;; i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				num[j] = num[j]*10+a[i]-48;
				b1 = 1;
			}
			else if (b1)
			{
				b1 = 0;
				break;
			}
		}
	}
	printf("%d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%-d\t",num[i]);
	}
	return 0;
}