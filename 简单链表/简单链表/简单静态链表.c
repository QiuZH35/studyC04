

#include <stdio.h>
#include <stdlib.h>


struct Note
{
	int num;

	struct Note* Pnext;


};







void main2()
{
	struct Note* p = NULL;//创建一个结构体指针，用于保存节点地址
	struct Note n1, n2, n3, n4, n5;
	n1.num = 1;
	n2.num = 2;
	n3.num = 3;
	n4.num = 4;
	n5.num = 5;

	p = &n1;//保存头节点地址
	n1.Pnext = &n2;
	n2.Pnext = &n3;
	n3.Pnext = &n4;
	n4.Pnext = &n5;
	n5.Pnext = NULL; //尾节点为0


	printf("%d\n", p->num);
	printf("%d\n", p->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->Pnext->num);
	//最简单的方法打印链表数据


	n2.Pnext = n3.Pnext;//删除n3的节点
	


	//尾部插入节点
	struct Note n6;
	n6.num = 6;
	n6.Pnext = NULL;
	n5.Pnext = &n6;


	//2和4中间插入
	struct Note n7;
	n7.num = 8;
	n7.Pnext = &n4;
	n2.Pnext = &n7;

	struct Note* px = p; //在不破环原有的链表的基础上，新建一个指针存储节点
	while (px != NULL)
	{
		printf("\nwhile访问%d", px->num);//先指向头节点
		px= px->Pnext;//逐个获取后一位节点
	}


	printf("\n%d\n", p->num);
	printf("%d\n", p->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->num);
	printf("%d\n", p->Pnext->Pnext->Pnext->num);
	//printf("%d\n", p->Pnext->Pnext->Pnext->Pnext->num);


	system("pause");
}