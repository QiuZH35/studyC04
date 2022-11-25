
#include <stdio.h>
#include <stdlib.h>


int getmax(int a, int b)
{
	return a > b ? a : b;
}
int getmin(int a, int b)
{
	return a < b ? a : b;
}
int add(int a, int b)
{

	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int divv(int a, int b)
{
	return a / b;
}







void main1()
{
	//int (*p)(int, int) = getmax;  //函数指针

	int (*p[])(int, int) = { getmax,getmin,add,sub,mul,divv };
	printf("%d\n", sizeof(p));
	//p函数指针数组名

	//int(*p[])(int,int)函数指针数组，等价于二级指针数组int(**p)(int,int)

	for (int i = 0; i < 6; i++)
	{
		printf("%d  ", p[i](100, 10));
		printf("%d \n", (*(p + i))(100, 10));  //(*(p+i))等价p[i]
	}
	for (int (**pp)(int, int) = p; pp < p + 6; pp++)
	{
		printf("%d ", (*pp)(100, 10));

	}



	system("pause");
}



void main2()
{
	//int a[6] = { 1,2,3,4,5,6 };
	//int (*p[6])(int, int) = { getmax,getmin,add,sub,mul,divv };
	//a,p都是常量
	//int* pa = (int[]){ 1,2,3,4,5,6 };//栈上开辟



	//int(**p)(int ,int ) 二级函数指针，存储函数指针名
	//int (*[])(int,int) 函数指针数组类型

	int (**p)(int, int) = (int(*[])(int, int)){ add,sub,mul,divv };
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", p[i](100, 10));
		printf("%d \n", (*(p + i))(100, 10));
	}


	system("pause");
}




//int *p  指针             int (*p)(int,int)
//int *p[] 指针数组			int (*[])(int,int)
//int **p  二级指针			int (**p)(int ,int )  //函数指针的类型主要看左边的括号

void main3()
{
	int(**pp)(int ,int) = malloc(sizeof(int(*)(int, int)) * 4);
	*pp = add;
	*(pp + 1) = sub;
	*(pp + 2) = mul;
	*(pp + 3) = divv;
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", pp[i](100, 10));
		printf("%d \n",(*(pp+i))(100, 10));
	}


	system("pause");
}




//typedef 简化函数指针
//int a;
typedef int a;

//int a[6]
typedef int b[6];

//int * c
typedef int* c;

//int *d[6]
typedef int* d[6];

//int (*p)[6]
typedef int(*p)[6];

//int (*p)(int,int)
typedef int(* pp)(int, int);

//int (*px[4])(int,int)
typedef int (*px[4])(int, int);

//int (**p)(int ,int)
typedef int(**py)(int, int);
//typedef 关键字简化后， 变量名既是类型


void main23()
{
	a a1;
	printf("%d\n", sizeof(a1));

	b b1;
	printf("%d\n", sizeof(b1));

	c c1;
	printf("%d\n", sizeof(c1));

	d d1;
	printf("%d\n", sizeof(d1));

	p p1;
	printf("%d\n", sizeof(p1));

	pp pp1=add;
	px px1 = { add,sub,mul,divv };
	py py1 = px1;


	system("pause");
}




//int (**x(int(*z)(int, int), int, double)) (int);

// 分解1   int (**    ) (int); 
//分解2   x(int(*z)(int, int), int, double)
// 分解3  int(*z)(int,int);

//x的返回值是一个二级函数指针，参数中有一个函数指针，int ,double
//x是一个函数
//z是一个函数指针


