
#include "linklist.h"

void init(Node* pheap)
{
	pheap->pNext = NULL;
	pheap->data = 0;//��ʼ��

}


Node* addback(Node *pheap, int data) //
{
	Node* pnew = (Node *)malloc((sizeof(Node)));//�µĽڵ�
	pnew->data = data;
	pnew->pNext = NULL;
	
	
	if (pheap == NULL)
	{
		pheap = pnew;//ֱ������
	}
	else
	{

		Node* ptemp = (Node*)malloc((sizeof(Node))); 
		ptemp=pheap;//���ݱ���ͷ�ڵ�
		while (ptemp->pNext !=NULL) //β������
		{
			ptemp = ptemp->pNext;//ѭ��
		}

		ptemp->pNext = pnew;//����
	}

	return pheap;


}
void addhead(Node** pheap, int data) {

	Node* pnew = malloc(sizeof(Node)); //�µĽڵ�
	pnew->data = data;
	pnew->pNext = NULL; //��ֵ
	if (pheap == NULL)
	{
		*pheap = pnew; //ֱ������
	}
	else
	{
		pnew->pNext = *pheap; //����ͷ�ڵ��ַ
		*pheap = pnew; 
	}



}



void showall(Node* pheap)
{
	if (pheap == NULL)
	{
		return;
	}
	else
	{
		printf("\n%d , %p ,%p ", pheap->data, pheap, pheap->pNext);

		showall(pheap->pNext); 
	}


}
void revshowall(Node* pheap)  
{
	
	if (pheap == NULL)
	{
		return;
	}
	else
	{
		
		showall(pheap->pNext);
		printf("\n%d , %p ,%p ", pheap->data, pheap, pheap->pNext);  //��ת��ʾ
	}
}

Node* searchfirst(Node* pheap, int finddata)
{
	for (Node* px = pheap; px != NULL; px = px->pNext)
	{

		if (px->data == finddata)
		{
			return px; //�����ҵ��ĵ�ַ
		}


	}
	return NULL;


}

Node* changefirst(Node* pheap, int finddata,int newdata)
{
	for (Node* px = pheap; px != NULL; px = px->pNext)
	{

		if (px->data == finddata)  //�ҵ����ݣ�Ȼ���޸�
		{
			px->data=newdata; //�����ҵ��ĵ�ַ
		}


	}
	return NULL;


}

Node* deletefirst(Node* pheap, int deletedata)
{
	Node* p1=NULL, * p2=NULL;
	p1 = pheap;//����ͷ�ڵ�
	while (p1 != NULL)
	{
		if (p1->data != deletedata)
		{
			p2 = p1;//P2����p1��һ��λ��
			p1 = p1->pNext;
		}
		else
		{
			break;
		}

	}
	if (p1 != pheap) //p1����ͷ�ڵ�����
	{
		p2->pNext = p1->pNext; //����p1
		free(p1);
	}
	else
	{
		pheap = pheap->pNext;
		free(p1);
	}
	return pheap;
}

Node* insertfirst(Node* pheap, int finddata, int newdata)
{
	Node* p1=NULL, * p2=NULL;
	p1 = pheap; //p1��ͷ�ڵ㿪ʼ���²���
	while (p1 != NULL)
	{
		if (p1->data != finddata) //��������
		{
			p2 = p1;        //p2����p1�Ľڵ�
			p1 = p1->pNext; //Ѱ����һ���ڵ�
		}
		else
		{
			break;
		}
	}
	Node* pnew = malloc(sizeof(Node)); //�µĽڵ�
	pnew->pNext = NULL;
	pnew->data = newdata; //��ֵ

	if (p1 == pheap) //p1=ͷ�ڵ������� ��ֱ�Ӹ�ֵ
	{
		pnew->pNext = pheap; 
		pheap = pnew;
	}
	else  
	{
		pnew->pNext = p1;
		p2->pNext = pnew;
	}


	return pheap;
}


int getnum(Node* phead)
{
	int i = 0;
	for (Node* px = phead; px != NULL;i++, px = px->pNext)
	{
		
	}

	return i;
}
int getnumdigui(Node* phead)
{
	if (phead == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + getnumdigui(phead->pNext);
	}


}


Node* rev(Node* phead)
{
	if (phead == NULL || phead->pNext==NULL)
	{
		return NULL;
	}
	else
	{
		Node* pre, * pcur, * pnext;
		pre = pcur = pnext = NULL;

		pre = phead;
		pcur = phead->pNext;
		while (pcur)
		{
			pnext = pcur->pNext; //������һ���ڵ�
			pcur->pNext = pre; //����ǰһ���ڵ�

			pre = pcur;
			pcur = pnext; //����

		}
		phead->pNext = NULL;
		phead = pre;//����ڵ�


		return phead;

	}

}


Node* getmid(Node* phead)
{
	if (phead == NULL || phead->pNext == NULL)
	{
		return phead;
	}
	else
	{
		Node* p1 = phead;
		Node* p2 = phead;
		while (p2->pNext != NULL)
		{
			p1 = p1->pNext;
			p2 = p2->pNext;
			if (p2->pNext != NULL)
			{
				p2 =p2->pNext ;
			}


		}

		return p1;


	}






}