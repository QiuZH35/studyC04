
#include <stdio.h>
#include <stdlib.h>
//��̬���鲻�ܲ��������ݣ��ڴ��޷��䳤

int close(int a[10],int  length,int num) //����ɾ��Ԫ��
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
			for (int j = i; j < length - 1; j++) //ɾ��Ԫ��֮��ÿ��Ԫ�ض���ǰ��λ
			{
				a[j] = a[j + 1];
			}

			length = length - 1;
		}
	}
	printf("ɾ��֮��\n");
	//length=close(a,length, num);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", a[i]);
	}


	system("pause");
}