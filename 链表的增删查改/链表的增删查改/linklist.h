
#pragma once
#include <stdio.h>
#include <stdlib.h>





struct Linklist
{
	int data;
	struct Linklist* pNext;


};

typedef struct Linklist Node; //������

void init(Node* pheap);//��ʼ��
Node* addback(Node* pheap, int data);//β����ӽڵ�

void addhead  (Node * *pheap, int data);//ͷ��
void showall(Node* pheap);//��ʾ
void revshowall(Node* pheap); //��ת��ʾ
Node* searchfirst(Node* pheap, int finddata); //��������
Node* changefirst(Node* pheap, int finddata, int newdata);//�޸Ĳ���

Node* deletefirst(Node* pheap, int deletedata);//����ɾ��
Node* insertfirst(Node* pheap, int finddata, int newdata);//����

int getnum(Node* phead);
int getnumdigui(Node* phead);

Node* rev(Node* phead);//�����������

Node* getmid(Node* phead);//��ȡ�м�ֵ
