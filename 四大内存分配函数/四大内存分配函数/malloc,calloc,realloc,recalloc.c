

#include <stdio.h>
#include <stdlib.h>

//  
//malloc  ���������ڴ�Ĵ�С����λ���ֽڣ������ʼ��
// int * pm=malloc(100) | malloc(sizeof(int)) ...
// 
//calloc  ������������һ���������ڴ濪�ٵĸ������ڶ�����ÿ���ڴ濪�ٵĴ�С����λ�ֽڣ��Զ���ʼ��0
// int * pc=calloc(20,4 ) | calloc(20,sizeof(int))...
// 
// realloc ������չ�ڴ� ��������������һ���ڴ��ַ���ڶ��������ڴ�Ĵ�С����λ�ֽڣ������ʼ��
//		   �������mallocʹ�ã�����ֵ���ڴ��ַ�����ٳɹ�����ԭ�ڴ��ַ������ʧ�ܷ������ڴ��ַ��
//			���¿���һ���ڴ��ҿ���ԭ���ݺ������٣�ԭ�����ڴ��Զ�free
// int *pre=realloc(pm,100) 
// 
//  
//_recalloc ������չ�ڴ棬������������һ���ڴ��ַ���ڶ��������ڴ�ĸ�����������ÿ���ڴ濪�ٵĴ�С
//			��λ�ֽڡ��Զ���ʼ��
//			�������callocʹ�ã�����ֵ���ڴ��ַ�����ٳɹ�����ԭ�ڴ��ַ������ʧ�ܷ������ڴ��ַ��
//			���¿���һ���ڴ��ҿ���ԭ���ݺ������٣�ԭ�����ڴ��Զ�free
// int * _prec=_recalloc(pc,20,4) | _recalloc(pc,20,sizeof(int))..
//







void main1()  //�ڴ濪��malloc ,calloc
{
	//int* p = malloc(100);//����100���ֽڵ��ڴ�
	//malloc �����ʼ������


	int* p = calloc(25,sizeof(int)); //calloc�����Ĳ�������������һ���ǿ��ٶ��ٸ��ڴ棬�ڶ�����ÿ���ڴ�Ĵ�С
	//calloc ���ʼ������Ϊ0


	printf("%p\n", p);

	for (int i = 0; i < 25; i++)
	{
		printf("%d\n", *(p + i)=i);
	}

	free(p);



	system("pause");

}

void main2() //�ڴ���չ realloc
{
	int* p = malloc(sizeof(int)*10);
	printf("%p\n", p);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i) = i);
	}


	//realloc ���ٵ��ڴ治���ʼ��
	int* px = realloc(p, 100);  //�ڴ���չ����p�ĵ�ַ�������µ��ڴ棬
	//��һ�����������ݵ�ַ���ڶ��������������ڴ��С����λ�ֽ�
	//realloc ���ٳɹ������ڴ��ַ��������չ�ڴ档���ٲ��ɹ��������¿���ԭ���ݺ󿪱��µ�һ���ڴ�
	//ԭ��������free��

	printf("%p\n", px);

	for (int i = 10; i < 25; i++)
	{
		printf("%d\n", *(px + i) = i);
	}

	system("pause");
}


void main() //�ڴ���չ  _recalloc
{
	int* p = calloc(20, 4);

	printf("%p\n",p);

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", *(p + i) = i);

	}

	int* px = _recalloc(p,20,sizeof(int));//�ڴ����㣬����չ�ڴ�

	printf("%p\n",px);

	for (int i = 20; i < 40; i++)
	{
		printf("%d\n", *(px + i) = i);

	}


	system("pause");
}