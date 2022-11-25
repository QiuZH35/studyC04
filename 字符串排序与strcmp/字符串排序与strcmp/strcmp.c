
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int com(const  void* p1, const void* p2)
{
	const char** str1 = p1;
	const char** str2 = p2;

	return strcmp(*str1, *str2);
}

void main1()
{
	char *str[10] = { "hello","run1","father","mather","apple","world","123","moon","cookie","user" };

	qsort(str, 10, 4,com);
	for (int i = 0; i < 10; i++)
	{
		puts(str[i]);
	}


	system("pause");
}

void main4()
{
	char* str[10] = { "hello","run1","father","mather","apple","world","123","moon","cookie","user" };
	char strx[10][10] = {"hello","run1","father","mather","apple","world","123","moon","cookie","user"};
	for (int i = 0; i < 10-1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (strcmp(strx[j], strx[j + 1]) > 0)
			{
				char strmp[100] = { 0 };
				strcpy(strmp, strx[j]);
				strcpy(strx[j], strx[j + 1]);
				strcpy(strx[j + 1], strmp);  //前提是数组可以写入
			}

		}
	}
	for (int i = 0; i < 10; i++)
	{
		puts(strx[i]);
	}
	printf("\n\n");
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (strcmp(str[j] , str[j + 1])>0)  //指针交换
			{
				char *strcemp[100] = { 0 };
				*strcemp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = *strcemp;

			}


		}
	}

	for (int i = 0; i < 10; i++)
	{
		puts(str[i]);
	}

	



	system("pause");
}