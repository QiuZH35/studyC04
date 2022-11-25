
#include <stdio.h>
#include <stdlib.h>



int mystrlen(const char* str)
{
	if (str == NULL)
	{
		return NULL;
	}
	
		int length = 0;
		while (*str++ != '\0')
		{
			length++;
		}


	
	return length;
}

void main2()

{
	char str[100] = "strlen123";
	int length = mystrlen(str);
	printf("%d\n", length);





	system("pause");
}