
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
	//int (*p)(int, int) = getmax;  //����ָ��

	int (*p[])(int, int) = { getmax,getmin,add,sub,mul,divv };
	printf("%d\n", sizeof(p));
	//p����ָ��������

	//int(*p[])(int,int)����ָ�����飬�ȼ��ڶ���ָ������int(**p)(int,int)

	for (int i = 0; i < 6; i++)
	{
		printf("%d  ", p[i](100, 10));
		printf("%d \n", (*(p + i))(100, 10));  //(*(p+i))�ȼ�p[i]
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
	//a,p���ǳ���
	//int* pa = (int[]){ 1,2,3,4,5,6 };//ջ�Ͽ���



	//int(**p)(int ,int ) ��������ָ�룬�洢����ָ����
	//int (*[])(int,int) ����ָ����������

	int (**p)(int, int) = (int(*[])(int, int)){ add,sub,mul,divv };
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", p[i](100, 10));
		printf("%d \n", (*(p + i))(100, 10));
	}


	system("pause");
}




//int *p  ָ��             int (*p)(int,int)
//int *p[] ָ������			int (*[])(int,int)
//int **p  ����ָ��			int (**p)(int ,int )  //����ָ���������Ҫ����ߵ�����

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




//typedef �򻯺���ָ��
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
//typedef �ؼ��ּ򻯺� ��������������


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

// �ֽ�1   int (**    ) (int); 
//�ֽ�2   x(int(*z)(int, int), int, double)
// �ֽ�3  int(*z)(int,int);

//x�ķ���ֵ��һ����������ָ�룬��������һ������ָ�룬int ,double
//x��һ������
//z��һ������ָ��


