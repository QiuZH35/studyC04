
#include <stdio.h>
#include <stdlib.h>







struct Node
{
	int num;
	struct Node* PNext;

};










void main()
{
	struct Node* p = NULL;//保存头节点

	struct Node* p1, * p2, * p3, * p4, * p5;

	p1 = (struct Node *)malloc(sizeof(struct Node));//分配内存
	p2 = (struct Node *)malloc(sizeof(struct Node));
	p3 = (struct Node *)malloc(sizeof(struct Node));
	p4 = (struct Node *)malloc(sizeof(struct Node));
	p5 = (struct Node *)malloc(sizeof(struct Node));

	p1->num = 1;
	p2->num = 2;
	p3->num = 3;
	p4->num = 4;
	p5->num = 5;//初始化节点数据

	p = p1;
	p1->PNext = p2;
	p2->PNext = p3;
	p3->PNext = p4;
	p4->PNext = p5;
	p5->PNext = NULL;

	printf("\n%d", p->num);
	printf("\n%d", p->PNext->num);
	printf("\n%d", p->PNext->PNext->num);
	printf("\n%d",p->PNext->PNext->PNext->num);
	printf("\n%d", p->PNext->PNext->PNext->PNext->num);


	//删除节点
	p2->PNext = p3->PNext;
	free(p3); //释放内存


	//插入节点
	struct Node* p6 = (struct Node*)malloc(sizeof(struct Node));
	p6->num = 33;
	p2->PNext = p6;
	p6->PNext = p4;



	for (struct Node* px = p; px != NULL; px = px->PNext)
	{
		if (px->num == 3)
		{
			px->num = 30;
		}
		printf("\nfor=%d ", px->num);
	}


	struct Node* px = p; //副本打印
	do
	{
		printf("\nwo while=%d", px->num);
		px = px->PNext;
		
	} while (px != NULL);



	system("pause");
}