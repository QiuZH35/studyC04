
#include "linklist.h"

void init(Node* pheap)
{
	pheap->pNext = NULL;
	pheap->data = 0;//初始化

}


Node* addback(Node *pheap, int data) //
{
	Node* pnew = (Node *)malloc((sizeof(Node)));//新的节点
	pnew->data = data;
	pnew->pNext = NULL;
	
	
	if (pheap == NULL)
	{
		pheap = pnew;//直接链接
	}
	else
	{

		Node* ptemp = (Node*)malloc((sizeof(Node))); 
		ptemp=pheap;//备份保留头节点
		while (ptemp->pNext !=NULL) //尾部插入
		{
			ptemp = ptemp->pNext;//循环
		}

		ptemp->pNext = pnew;//链接
	}

	return pheap;


}
void addhead(Node** pheap, int data) {

	Node* pnew = malloc(sizeof(Node)); //新的节点
	pnew->data = data;
	pnew->pNext = NULL; //赋值
	if (pheap == NULL)
	{
		*pheap = pnew; //直接连接
	}
	else
	{
		pnew->pNext = *pheap; //保存头节点地址
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
		printf("\n%d , %p ,%p ", pheap->data, pheap, pheap->pNext);  //反转显示
	}
}

Node* searchfirst(Node* pheap, int finddata)
{
	for (Node* px = pheap; px != NULL; px = px->pNext)
	{

		if (px->data == finddata)
		{
			return px; //返回找到的地址
		}


	}
	return NULL;


}

Node* changefirst(Node* pheap, int finddata,int newdata)
{
	for (Node* px = pheap; px != NULL; px = px->pNext)
	{

		if (px->data == finddata)  //找到数据，然后修改
		{
			px->data=newdata; //返回找到的地址
		}


	}
	return NULL;


}

Node* deletefirst(Node* pheap, int deletedata)
{
	Node* p1=NULL, * p2=NULL;
	p1 = pheap;//保存头节点
	while (p1 != NULL)
	{
		if (p1->data != deletedata)
		{
			p2 = p1;//P2保存p1上一个位置
			p1 = p1->pNext;
		}
		else
		{
			break;
		}

	}
	if (p1 != pheap) //p1不是头节点的情况
	{
		p2->pNext = p1->pNext; //跳过p1
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
	p1 = pheap; //p1从头节点开始向下查找
	while (p1 != NULL)
	{
		if (p1->data != finddata) //查找数据
		{
			p2 = p1;        //p2保留p1的节点
			p1 = p1->pNext; //寻找下一个节点
		}
		else
		{
			break;
		}
	}
	Node* pnew = malloc(sizeof(Node)); //新的节点
	pnew->pNext = NULL;
	pnew->data = newdata; //赋值

	if (p1 == pheap) //p1=头节点的情况下 ，直接赋值
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
			pnext = pcur->pNext; //保存下一个节点
			pcur->pNext = pre; //保存前一个节点

			pre = pcur;
			pcur = pnext; //轮替

		}
		phead->pNext = NULL;
		phead = pre;//保存节点


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