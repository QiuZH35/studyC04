



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 8

int a[N]; //a[i]第i行的皇后


void show()
{
	int data[N][N] = { 0 };
	static int t = 1;//第几次解
	printf("\n第%d个解法\n", t);
	for (int i = 0; i < N; i++)
	{
		data[i][a[i]] = 1;//皇后的位置
	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N; j++)
		{
			if (data[i][j] == 1)
			{
				printf("●");
			}
			else
			{
				printf("■");
			}
		}
		printf("\n");
	}
	t++;
}

int check(int n)  //判断是否合格
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] ==a[n]  || fabs(n - i) == fabs(a[n] - a[i]))
		{
			return 0;
		}

	}
	return 1;

}

void getqueen(int n)
{
	if (n == N)
	{
		return;
	}
	for (int i = 0; i < N; i++)
	{
		a[n] = i;//第N行放第N个皇后
		if (check(n)) //判定合法与否
		{
			if (n == N - 1) //放完
			{
				show();
			}
			else
			{
				getqueen(n + 1);
			}
		}
	}
}

void main()
{
	getqueen(0);




	//system("pause");
}