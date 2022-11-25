
#include <stdio.h>
#include <stdlib.h>



void run()
{
	int a[5] = { 1,2,3,4,5 };//静态数组

	int* p = malloc(sizeof(int) * 5);//动态数组,堆区，需要手动释放

	
	

	

	for (int i = 0; i < 5; i++)
	{
		*(p + i) = i;
	}

	free(p); //释放后的内存，没有被占用，将继续使用那片内存，否则重新开辟一段内存
	int* pc99 = (int[]){ [2]=1,[4] = 10 }; //c99 数组语法，静态数组,栈区不可以释放
	
	printf("%p", pc99);

	free(pc99);//释放栈区内存会触发异常
	printf("\n");

}

void main1()
{
	run();

	printf("\n");



	run();
	
	printf("\n");







	system("pause");
}

void main()
{
	int a[10] = { [3] = 1,[8] = 6 };//数组初始化下标第四个为1，第八个为6，其他默认为0

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(a + i));


	}




	system("pause");
}