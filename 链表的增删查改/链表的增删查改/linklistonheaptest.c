


#include "linklist.h"




void main1()
{
	Node* pheap=NULL; //ͷ�ڵ㲻�����ڴ�
	//init(pheap);//��ʼ��

	pheap=addback(pheap, 11);
	pheap=addback(pheap, 12);
	pheap=addback(pheap, 13);
	pheap=addback(pheap, 14);
	pheap = addback(pheap, 17);
	pheap = addback(pheap, 15);
	pheap = addback(pheap, 19);
	pheap = addback(pheap, 20);
	showall(pheap);
	//printf("\n\n%d", getnumdigui(pheap));
	printf("\n\n");
	pheap = rev(pheap);
	showall(pheap);


	/*pheap = insertfirst(pheap, 17,99);
	pheap = insertfirst(pheap, 15,199);
	pheap = insertfirst(pheap, 11, 599);*/

	/*addhead(&pheap, 20);
	addhead(&pheap, 33);
	Node*p=searchfirst(pheap, 15);
	p->data = 99;

	Node* px = changefirst(pheap, 99, 15);*/

	//showall(pheap);
	/*printf("\n\n");
	pheap = deletefirst(pheap, 11);
	pheap = deletefirst(pheap, 12);*/
	//showall(pheap);

	system("pause");
}


void main22()
{

	Node* pheap = NULL;
	pheap = addback(pheap, 11);
	pheap = addback(pheap, 12);
	pheap = addback(pheap, 13);
	pheap = addback(pheap, 14);
	pheap = addback(pheap, 17);
	pheap = addback(pheap, 15);
	pheap = addback(pheap, 19);
	pheap = addback(pheap, 20);
	showall(pheap);

	Node* pheapx = getmid(pheap);
	//showall(pheapx);
	printf("\n%d", pheapx->data);
}


void show( Node*phead) //��������
{
	Node* p = phead;
	for(;p->pNext!=phead;p=p->pNext)
	{
		
		printf(" %d ",p->data);
	}
	printf(" %d ", p->data);

}

int isit(Node* phead) //�ж��Ƿ��л�
{
	int flag = 0;
	for (Node* p1 = phead, *p2 = phead; p1 != NULL && p2 != NULL; p1 = p1->pNext, p2 = p2->pNext) //��������Ļ���ѭ��

	{
	//p1��һ����p2��������������������ж��л�
		if (p2->pNext != NULL)
		{
			p2=p2->pNext;

		}
		if (p2->pNext != NULL)
		{
			p2=p2->pNext;
		}

		if (p1 == p2)
		{
			flag = 1;
			break;

		}

	}

	return flag;
}



void main()
{
	Node* phead = NULL;
	phead = addback(phead, 0);
	phead = addback(phead, 1);
	phead = addback(phead, 2);
	phead = addback(phead, 3);
	phead = addback(phead, 4);
	phead = addback(phead, 5);
	phead = addback(phead, 6);
	Node* p = phead;
	for (; p->pNext != NULL; p = p->pNext)
	{

	}
	p->pNext = phead; //β��������ͷ��
	show(phead);
	printf("\n%d", isit(phead));

	system("pause");
}