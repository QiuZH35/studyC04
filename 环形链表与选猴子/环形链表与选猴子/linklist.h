#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct linklist
{
	int data;
	struct linklist* pNext;
}node,*pnode;

pnode addback(pnode phead, int data);  //β������
pnode addfront(pnode phead, int data);//ͷ������
pnode findfirst(pnode phead, int data); //��������
pnode deletefirst(pnode phead, int data); //ɾ������


void show(pnode phead);//��ʾ