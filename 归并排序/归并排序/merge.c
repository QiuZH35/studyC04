


#include <stdio.h>
#include <stdlib.h>
#define N 10


void show(int* p, int length)
{


	printf("\n");
	for (int i = 0; i < length; i++)
	{
		printf("%4d",*(p+i));
	}
}
void merge2(int* p, int first, int mid, int last);
void merge3(int* p, int first, int mid, int last);
void merge(int* p, int first, int mid, int last)
{
	int* ptemp = calloc(last - first + 1, sizeof(int));//����ռ�
	int left_first = first;
	int left_last = mid;

	int right_first = mid + 1;
	int right_last = last;   //���±�ֵ

	int k = 0;
	for (k = 0; left_first <= left_last && right_first <= right_last; k++) //�鲢�㷨
	{
		if (p[left_first] <= p[right_first])
		{
			ptemp[k] = p[left_first];
			left_first++;
		}
		else
		{
			ptemp[k] = p[right_first++];
		}
	}
	
	if (left_first <= left_last)    //�����ߵ�һ����ʣ���
	{
		for (int j = left_first; j <= left_last; j++)
		{
			ptemp[k] = p[j];
			k++;
		}
	}
	if (right_first <= right_last)  //����ұߵ�һ����ʣ���
	{

		for (int j = right_first; j <= right_last; j++)
		{
			ptemp[k] = p[j];
			k++;

		}

	}
	for (int i = 0; i < last - first + 1; i++)  //���濽��
	{
		p[first + i] = ptemp[i];

	}
	free(ptemp);




}

void merge5(int* p, int first, int mid, int last);
void merge_sort(int* p, int first, int last)
{
	int mid = 0;
	if (first < last)//�ݹ�����	
	{
		mid = (first + last) / 2;
		merge_sort(p, first, mid);
		merge_sort(p, mid + 1, last);// �ݹ��и�
		merge5(p, first, mid, last);


	}




}


void shellsort(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{
		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i];
			int j = i - d;
			while (j >= 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j = j - d;
			}
			p[j + d] = x;

		}



		d--;
	}


}



void shellsort2(int* p, int length)
{
	int d = length / 2;
	while (d >= 1)
	{
		for (int i = d; i < length && d < length; i++)
		{
			int x = p[i];//����
			int j = i- d;
			while (j > 0 && p[j] > x)
			{

				p[j + d] = p[j];
				j = j - d;

			}

			p[j + d] = x;
		}



		d /= 2;
	}



}


void merge5(int* p, int first, int mid, int last)
{
	int* ptemp = calloc(last - first + 1, sizeof(int));
	int left_first = first;
	int left_last = mid;

	int right_first = mid + 1;
	int right_last = last;

	int k = 0;
	for (k = 0; left_first <= left_last && right_first <= right_last; k++)
	{
		if (p[left_first] <= p[right_first])
		{
			ptemp[k] = p[left_first++];
			
		}
		else
		{
			ptemp[k] = p[right_first++];
		}


	}
	if (left_first <= left_last)
	{
		for (int i = left_first; i <= left_last; i++)
		{
			ptemp[k] = p[i];
			k++;
		}

	}
	if (right_first <= right_last)
	{
		for (int i = right_first; i <= right_last; i++)
		{
			ptemp[k] = p[i];
			k++;
		}
	}
	for (int i = 0; i < last - first + 1; i++)
	{
		p[first + i] = ptemp[i];



	}
	free(ptemp);


}


void merge_sort4(int* p, int first, int last)
{
	int mid = 0;
	if (first <= last)
	{
		mid = (first + last) / 2;
		merge_sort4(p, first, mid);
		merge_sort4(p, mid + 1, last);
		merge5(p, first, mid, last);


	}


}






void main()
{
	int a[N] = { 1,4,2,5,6,3,7,99,8,10 };
	show(a, N);
	merge_sort(a, 0,N-1);
	//shellsort2(a, N);
	show(a, N);



	system("pause");
}

void merge2(int* p, int first, int mid, int last)
{
	int* ptemp = calloc(last - first + 1, sizeof(int)); //����ռ䣻

	int left_first = first;
	int left_last = mid;

	int right_first = mid + 1;
	int right_last = last;

	int k = 0;
	for (k = 0; left_first <= left_last && right_first <= right_last; k++)  //�鲢�㷨
	{
		if (p[left_first] <= p[right_first])  //�Ա��������ߵĵ�һ��
		{
			ptemp[k] = p[left_first++];

		}
		else
		{
			ptemp[k] = p[right_first++];
		}

	}

	if (left_first <= left_last)  //���ʣ��һ��
	{
		for (int j = left_first; j <= left_last; j++)
		{
			ptemp[k] = p[j];
			k++;

		}


	}
	if (right_first <= right_last)  //�ұ�ʣ��һ��
	{
		for (int j = right_first; j <= right_last; j++)
		{
			ptemp[k] = p[j];
			k++;
		}
	}
	for (int i = 0; i < last - first + 1; i++) //����
	{
		p[first + i] = ptemp[i];
	}

	free(ptemp);



}




void merge_sort2(int* p, int first, int last)
{
	int mid = 0;
	if (first < last)
	{
		mid = (first + last) / 2;
		merge_sort2(p, first, mid);
		merge_sort2(p, mid + 1, last); //�ݹ��и�
		merge5(p, first, mid, last);


	}

}

void merge3(int* p, int first, int mid, int last)
{
	int* ptemp = calloc(last - first + 1, sizeof(int));

	int left_first = first;
	int left_last = mid;

	int right_first = mid + 1;
	int right_last = last;

	int k = 0;
	for (k = 0; left_first <= left_last && right_first <= right_last; k++)
	{
		if (p[left_first] <= p[right_first])
		{
			ptemp[k] = p[left_first++];

		}
		else
		{
			ptemp[k] = p[right_first++];
		}

	}
	if (left_first <= left_last)
	{
		for (int i = left_first; i <= left_last; i++)
		{
			ptemp[k] = p[i];
			k++;
		}
		
	}
	if (right_first <= right_last)
	{
		for (int i = right_first; i <= right_last; i++)
		{
			ptemp[k] = p[i];
			k++;
		}
	}
	for (int i = 0; i <  last-first + 1; i++)
	{
		p[first+i] = ptemp[i];
	}

	free(ptemp);
}
