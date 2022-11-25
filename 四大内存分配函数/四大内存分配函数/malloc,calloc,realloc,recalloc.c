

#include <stdio.h>
#include <stdlib.h>

//  
//malloc  参数既是内存的大小，单位是字节，不会初始化
// int * pm=malloc(100) | malloc(sizeof(int)) ...
// 
//calloc  两个参数，第一个参数是内存开辟的个数，第二个是每个内存开辟的大小，单位字节，自动初始化0
// int * pc=calloc(20,4 ) | calloc(20,sizeof(int))...
// 
// realloc 用于拓展内存 ，两个参数，第一个内存地址，第二个开辟内存的大小，单位字节，不会初始化
//		   常常配合malloc使用，返回值是内存地址，开辟成功返回原内存地址，开辟失败返回新内存地址，
//			重新开辟一段内存且拷贝原数据后续开辟，原数据内存自动free
// int *pre=realloc(pm,100) 
// 
//  
//_recalloc 用于拓展内存，三个参数，第一个内存地址，第二个开辟内存的个数，第三个每个内存开辟的大小
//			单位字节。自动初始化
//			常常配合calloc使用，返回值是内存地址，开辟成功返回原内存地址，开辟失败返回新内存地址，
//			重新开辟一段内存且拷贝原数据后续开辟，原数据内存自动free
// int * _prec=_recalloc(pc,20,4) | _recalloc(pc,20,sizeof(int))..
//







void main1()  //内存开辟malloc ,calloc
{
	//int* p = malloc(100);//开辟100个字节的内存
	//malloc 不会初始化数据


	int* p = calloc(25,sizeof(int)); //calloc函数的参数有两个，第一个是开辟多少个内存，第二个是每个内存的大小
	//calloc 会初始化数据为0


	printf("%p\n", p);

	for (int i = 0; i < 25; i++)
	{
		printf("%d\n", *(p + i)=i);
	}

	free(p);



	system("pause");

}

void main2() //内存拓展 realloc
{
	int* p = malloc(sizeof(int)*10);
	printf("%p\n", p);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i) = i);
	}


	//realloc 开辟的内存不会初始化
	int* px = realloc(p, 100);  //内存拓展，在p的地址，开辟新的内存，
	//第一个参数，传递地址，第二个参数，开辟内存大小，单位字节
	//realloc 开辟成功返回内存地址，往后拓展内存。开辟不成功，会重新拷贝原内容后开辟新的一段内存
	//原来的内容free了

	printf("%p\n", px);

	for (int i = 10; i < 25; i++)
	{
		printf("%d\n", *(px + i) = i);
	}

	system("pause");
}


void main() //内存拓展  _recalloc
{
	int* p = calloc(20, 4);

	printf("%p\n",p);

	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", *(p + i) = i);

	}

	int* px = _recalloc(p,20,sizeof(int));//内存清零，且拓展内存

	printf("%p\n",px);

	for (int i = 20; i < 40; i++)
	{
		printf("%d\n", *(px + i) = i);

	}


	system("pause");
}