#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct linklist
{
	int data;
	struct linklist* pNext;
}node,*pnode;

pnode addback(pnode phead, int data);  //尾部插入
pnode addfront(pnode phead, int data);//头部插入
pnode findfirst(pnode phead, int data); //查找数据
pnode deletefirst(pnode phead, int data); //删除数据


void show(pnode phead);//显示