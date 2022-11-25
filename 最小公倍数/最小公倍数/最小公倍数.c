

#include <stdio.h>
#include <stdlib.h>

int getmax(int a, int b, int c)
{

	return a > b ? (a > c ? a : (b > c ? b : c)) : b > c ? b : c;

}


void main()
{
	int a = 12, b = 14, c = 15;
	int max = getmax(a, b, c);
	//printf("%d", max);
	//5*1  5*2 5*3 5*4
	for (int i = 1;; i++)
	{
		int k = max * i;
		if (k%a == 0 && k%b == 0 && k%c == 0)
		{
			printf("最小公倍数%d\n", k);
			break;
		}
	}

	system("pause");
}