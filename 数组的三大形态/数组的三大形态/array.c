
#include <stdio.h>
#include <stdlib.h>



void run()
{
	int a[5] = { 1,2,3,4,5 };//��̬����

	int* p = malloc(sizeof(int) * 5);//��̬����,��������Ҫ�ֶ��ͷ�

	
	

	

	for (int i = 0; i < 5; i++)
	{
		*(p + i) = i;
	}

	free(p); //�ͷź���ڴ棬û�б�ռ�ã�������ʹ����Ƭ�ڴ棬�������¿���һ���ڴ�
	int* pc99 = (int[]){ [2]=1,[4] = 10 }; //c99 �����﷨����̬����,ջ���������ͷ�
	
	printf("%p", pc99);

	free(pc99);//�ͷ�ջ���ڴ�ᴥ���쳣
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
	int a[10] = { [3] = 1,[8] = 6 };//�����ʼ���±���ĸ�Ϊ1���ڰ˸�Ϊ6������Ĭ��Ϊ0

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(a + i));


	}




	system("pause");
}