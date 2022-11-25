#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mystrcpy(char* dest, const char* source)
{
	if (*dest == NULL || *source == NULL)
	{
		return NULL;
	}
	char* p = dest;
	//while (*source != '\0')
	//{
	//	*dest++ = *source++;
	//}
	//*dest = *source; //¥¶¿Ì\0

	while (*dest++ = *source++)
	{

	}

	return p;

}


void main3()
{
	char str1[100];
	char* p = "…ﬂÕÃœÛ123456";
	mystrcpy(str1, p);
	printf("%s\n",str1);





	system("pause");
}