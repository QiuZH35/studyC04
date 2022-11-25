#include "linklist.h"




void main()
{
	pnode phead = NULL;//Í·½Úµã
	for (int i = 0; i < 10; i++)
	{
		phead = addback(phead, i);
		//phead = addfront(phead, i);
	}
	/*pnode px = findfirst(phead, 6);
	px->data = 30;*/

	phead = deletefirst(phead, 5);
	show(phead);
	
	system("pause");
}