

#include <stdio.h>
#include <stdlib.h>


void show(int* p, int size)
{
	printf("\n\n");
	for (int i = 0; i < size; i++)
	{
		printf("%3d", *(p + i));

	}
}

void shellsort(int* p, int length)
{
	int d = length / 2; //增量
	while (d >= 1)//增量终止条件
	{
		for (int i = d; d < length && i < length; i++)//最后的位置
		{
			int x = p[i];//备份
			int j = i - d;//前面的一个元素
			while (j >= 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j = j - d;  //每次增量减d
			}
			p[j + d] = x; //交换
		}

		//d /= 2; //增量每次减少两倍
		d--;
		show(p, 10);
	}
	



}
void shellsort2(int* p, int length);
void shellsort3(int* p, int length);
void shellsort4(int* p, int length);
void shellsort5(int* p, int length);
void main()
{
	int a[10] = { 1,8,2,7,4,5,3,6,10,22 };
	show(a, 10);
	shellsort5(a, 10);
	
	show(a, 10);



	system("pause");
}

void shellsort2(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{
		
		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i];
			int j = i - d;
			while (j >= 0 && p[j] > x)
			{

				p[j + d] = p[j];
				j = j - d;
			}
			p[j + d] = x;
		}

	


		d /= 2;
	}



}

void shellsort3(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{

		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i]; //备份
			int j = i - d;
			while (j > 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j = j - d;

			}
			p[j + d] = x;

		}




		d /= 2;
	}




}
void shellsort4(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{

		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i];
			int j = i - d;
			while (j > 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j = j - d;
			}
			p[j + d] = x;

		}

		d /= 2;
	}

}



void shellsort5(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{
		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i]; //备份
			int j = i - d;
			while (j > 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j = j - d;
			}
			p[j + d] = x;
		}




		d--;
	}





}