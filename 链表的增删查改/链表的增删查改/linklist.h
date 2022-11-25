
#pragma once
#include <stdio.h>
#include <stdlib.h>





struct Linklist
{
	int data;
	struct Linklist* pNext;


};

typedef struct Linklist Node; //简化类型

void init(Node* pheap);//初始化
Node* addback(Node* pheap, int data);//尾部添加节点

void addhead  (Node * *pheap, int data);//头插
void showall(Node* pheap);//显示
void revshowall(Node* pheap); //反转显示
Node* searchfirst(Node* pheap, int finddata); //查找数据
Node* changefirst(Node* pheap, int finddata, int newdata);//修改查找

Node* deletefirst(Node* pheap, int deletedata);//查找删除
Node* insertfirst(Node* pheap, int finddata, int newdata);//插入

int getnum(Node* phead);
int getnumdigui(Node* phead);

Node* rev(Node* phead);//反向输出链表

Node* getmid(Node* phead);//获取中间值
