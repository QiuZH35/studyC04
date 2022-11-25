

#include <stdio.h>
#include <stdlib.h>
//动态数组插入消耗内存，


void main1()
{
	int* p = malloc(sizeof(int) * 10); //分配内存
	int length = 10;
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", *(p + i) = i);
	}
	
	//删除数据
	//int num = 4;
	//for (int i = 0; i < length; i++)
	//{
	//	if (num == *(p+i))
	//	{
	//		for (int j = i; j < length - 1; j++)
	//		{
	//			*(p+j) = *(p+j+1);
	//		}
	//		length = length - 1;
	//		break;
	//	}
	//}
	//printf("删除之后\n");


	//增加数据
	//int num = 30;
	//int* px = realloc(p, sizeof(int) * (10 + 1));
	//length += 1;
	//px[10] = num;
	//
	//for (int i = 0; i < length; i++)
	//{
	//	printf("%d\n", *(px + i));
	//}


	//指定位置插入数据
	//int num = 4;
	//int* px = realloc(p, sizeof(int) * (10 + 1));
	//length += 1;
	//for (int i = 0; i < length; i++)
	//{
	//	if (num == *(px + i))
	//	{
	//		for (int j = length-1; j>i; j--)
	//		{
	//			*(px + j) = *(px + j - 1);
	//		}
	//		*(px + i) = 303;
	//		break;
	//	}
	//}
	//for (int i = 0; i < length; i++)
	//{
	//	printf("%d\n", *(px + i));
	//}


	system("pause");
}