
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


//五大分配内存函数
//malloc(100)   calloc(25,4)   realloc(p,100)    _recalloc(p,25,4)    alloca(100)





void show()
{
	int* p = alloca(sizeof(int) * 10); //栈区分配内存
	printf("%p\n\n", p);

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	printf("\n");


}


void main()
{
	show();

	printf("\n");


	show();


	printf("\n");



	system("pause");
}