
#include "linklist.h"

pnode addback(pnode phead, int data)
{
	pnode pnew = malloc(sizeof(node));
	pnew->data = data;

	if (phead == NULL)
	{
		phead = pnew;
		pnew->pNext = phead; //��һ���ڵ�Ļ�
	}
	else
	{
		//����ͷ��
		pnode p = phead;
		while (p->pNext != phead) //pÿ��ָ����һ���ڵ�
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		pnew->pNext = phead; //ͷβ����
	}

	return phead;

}

pnode addfront(pnode phead, int data)
{
	pnode pnew = malloc(sizeof(node));
	pnew->data = data;
	if (phead ==NULL )
	{
	
		phead = pnew;
		pnew->pNext = phead;  //ֻ��һ���������
	}
	else
	{
		pnode p = phead;
		while (p->pNext != phead)
		{
			p = p->pNext;
		} //ѭ����β��

		p->pNext = pnew;  //β����ֵ
		pnew->pNext = phead; //����ͷ�ڵ�
		phead=pnew;  //ͷβ����


	}





}

pnode findfirst(pnode phead, int data)
{
	if ( phead== NULL)
	{
		return NULL;
	}
	else if(phead->data==data)
	{
		return phead;
	}
	else
	{
		pnode p = phead;
		while (p->pNext != phead)
		{
			if (p->data == data)
			{
				return p;
			}
			p = p->pNext;
		}
		if (p->data == data)
		{
			return p;
		}

	}




}


pnode deletefirst(pnode phead, int data)
{

	pnode p1 = NULL;
	pnode p2 = NULL;
	p1 = phead; // ����ͷ�ڵ�
	while (p1->pNext != phead)
	{
		if (p1->data=data)
		{
			break;
		}
		else
		{
			p2 = p1;//p2����p1��ǰ�Ľڵ�
			p1 = p1->pNext;//��ѭ��������

		}
	}
	if (p1!=phead)
	{
		p2->pNext = p1->pNext;
		free(p1);

	}
	else
	{
		//�ͷ�ͷ�ڵ�
		pnode p = phead;
		while (p->pNext != phead)
		{
			p = p->pNext;
		}
		phead = phead->pNext;//�ı�ͷ�ڵ�
		free(p1);
		p->pNext = phead;

	}

	return  phead;
}





void show(pnode phead)
{
	if (phead == NULL)
	{
		return;
	}
	else if(phead->pNext==phead) //ֻ��һ���������
	{
		
			printf("%d , %p , %p \n", phead->data, phead, phead->pNext);
		
	}
	else
	{
		pnode p = phead;
		while (p->pNext != phead)
		{
			printf("%d , %p , %p \n", p->data, p, p->pNext);
			p = p->pNext;

		}
		printf("%d , %p , %p \n", p->data, p, p->pNext);

	}

}