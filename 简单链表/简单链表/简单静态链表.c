

#include <stdio.h>
#include <stdlib.h>


struct Note
{
	int num;

	struct Note* Pnext;


};







void main2()
{
	struct Note* p = NULL;//����һ���ṹ��ָ�룬���ڱ���ڵ��ַ
	struct Note n1, n2, n3, n4, n5;
	n1.num = 1;
	n2.num = 2;
	n3.num = 3;
	n4.num = 4;
	n5.num = 5;

	p = &n1;//����ͷ�ڵ��ַ
	n1.Pnext = &n2;
	n2.Pnext = &n3;
	n3.Pnext = &n4;
	n4.Pnext = &n5;
	n5.Pnext = NULL; //β�ڵ�Ϊ0


	printf("%d\n", p->num);
	printf("%d\n", p->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->Pnext->num);
	//��򵥵ķ�����ӡ��������


	n2.Pnext = n3.Pnext;//ɾ��n3�Ľڵ�
	


	//β������ڵ�
	struct Note n6;
	n6.num = 6;
	n6.Pnext = NULL;
	n5.Pnext = &n6;


	//2��4�м����
	struct Note n7;
	n7.num = 8;
	n7.Pnext = &n4;
	n2.Pnext = &n7;

	struct Note* px = p; //�ڲ��ƻ�ԭ�е�����Ļ����ϣ��½�һ��ָ��洢�ڵ�
	while (px != NULL)
	{
		printf("\nwhile����%d", px->num);//��ָ��ͷ�ڵ�
		px= px->Pnext;//�����ȡ��һλ�ڵ�
	}


	printf("\n%d\n", p->num);
	printf("%d\n", p->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->num);
	//printf("%d\n", p->Pnext->Pnext->Pnext->Pnext->num);


	system("pause");
}