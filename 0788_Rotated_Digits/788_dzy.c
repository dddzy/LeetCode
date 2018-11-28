#include "stdio.h"

int rotatedDigits(int N)
{
	char s[1];
	char *p = s;
	int num = 0, i = 0, check = 0;
	for (i = 0; i <= N; i++)
	{
		sprintf(s, "%d", i);
		p = s;
		while (*p != '\0')
		{
			if (*p == '2' || *p == '5' || *p == '6' || *p == '9')
			{
				check = 1;
			}
			if (*p == '3' || *p == '4' || *p == '7')
			{
				check = 0;
				break;
			}
			p++;
		}
		if (check)num++;
		check = 0;
	}
	return num;
}


int main()
{
	int s = 0;
	while (1)
	{
		scanf_s("%d", &s);
		printf("ºÃÊý=%d\n", rotatedDigits(s));
	}
    return 0;
}

