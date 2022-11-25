
#include <stdio.h>
#include <stdlib.h>
//静态数组不能操作大数据，内存无法变长

int close(int a[10],int  length,int num) //数组删除元素
{
	
	for (int i = 0; i < length; i++)
	{
		if (num == a[i])
		{
			for (int j = i; j < length - 1; j++)
			{
				a[j] = a[j + 1];
			}
			length = length - 1;
			break;
		}
	}

	return length;
}



void main()
{
	int a[10] = { 0,1,2,2,3,0,4,2};
	int length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", a[i]);
	} 
	int num = 2;
	for (int i = 0; i < length; i++)
	{
		if (num == a[i])
		{
			for (int j = i; j < length - 1; j++) //删除元素之后，每个元素都往前移位
			{
				a[j] = a[j + 1];
			}

			length = length - 1;
		}
	}
	printf("删除之后\n");
	//length=close(a,length, num);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", a[i]);
	}


	system("pause");
}