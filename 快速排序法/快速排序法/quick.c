

#include <time.h>
#include <stdio.h >
#include <stdlib.h>


void show(int *arr,int num) //��ʾ����
{
	printf("��ʱ��״̬: \n");
	for (int i = 0; i < num; i++)
	{
		printf("%4d", *(arr + i));
	}
	printf("\n");
}

void swap(int *pLeft,int *pRigth) //��������
{
	int temp = *pLeft;
	*pLeft = *pRigth;
	*pRigth = temp;
}



void quick(int *arr,int Left,int Rigth)
{
	int i = Left;
	int j = Rigth+1;
	if (i < j) {
		do {
			

				do {
					i++;


				} while (arr[i] <= arr[Left] && i <= Rigth);
				//����ұߵ�һ��С��������
			


				do {
					j--;


				} while (arr[j] >= arr[Left] && j > Left);
				//�����ߵ�һ������������
			

			if (i < j)
			{
				swap(&arr[i], &arr[j]);//����
			}



		} while (i < j);
		swap(&arr[Left], &arr[j]);

		show(arr, 10);

		quick(arr, Left, j - 1); //�ָ����
		quick(arr, j + 1, Rigth);

	}

}


int counts(int* arr,int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (*(arr + i) != *(arr + i + 1))
		{
			count++;
			if (*(arr + i) == *(arr + i + 1))
			{
				count--;
			}

		}
		

	}


	return count;
}

void main()
{
	srand((unsigned int)time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 20;
	}
	quick(arr, 0, 10 - 1);

	show(arr, 10);
	printf("%d\n",counts(arr, sizeof(arr)/sizeof(arr[0])));


	system("pause");
}