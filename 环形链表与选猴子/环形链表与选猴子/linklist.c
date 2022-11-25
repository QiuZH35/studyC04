
#include "linklist.h"

pnode addback(pnode phead, int data)
{
	pnode pnew = malloc(sizeof(node));
	pnew->data = data;

	if (phead == NULL)
	{
		phead = pnew;
		pnew->pNext = phead; //第一个节点的环
	}
	else
	{
		//连接头部
		pnode p = phead;
		while (p->pNext != phead) //p每次指向下一个节点
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		pnew->pNext = phead; //头尾相连
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
		pnew->pNext = phead;  //只有一个的情况下
	}
	else
	{
		pnode p = phead;
		while (p->pNext != phead)
		{
			p = p->pNext;
		} //循环到尾部

		p->pNext = pnew;  //尾部赋值
		pnew->pNext = phead; //保存头节点
		phead=pnew;  //头尾相连


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
	p1 = phead; // 等于头节点
	while (p1->pNext != phead)
	{
		if (p1->data=data)
		{
			break;
		}
		else
		{
			p2 = p1;//p2保存p1当前的节点
			p1 = p1->pNext;//起到循环的作用

		}
	}
	if (p1!=phead)
	{
		p2->pNext = p1->pNext;
		free(p1);

	}
	else
	{
		//释放头节点
		pnode p = phead;
		while (p->pNext != phead)
		{
			p = p->pNext;
		}
		phead = phead->pNext;//改变头节点
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
	else if(phead->pNext==phead) //只有一个的情况下
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