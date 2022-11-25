#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(const char* _str1, const char* _str2) //下标法
{
	if (_str1 == NULL || _str2 == NULL)
	{
		return 0;

	}
	int i = 0;
	while (_str1[i] == _str2[i] && _str1[i] != '\0')
	{
		i++;
	}
	if (_str1[i] == '\0' && _str2[i] == '\0')
	{
		return 0;
	}
	else
	{
		//return _str1[i] - str2[i];
		if (_str1[i] - _str2[i] > 0)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}

}



int mystrcmpaddr(const char* _str1, const char* _str2) //指针法
{
	if (_str1 == NULL || _str2 == NULL)
	{
		return 0;

	}
	const char* str1 = _str1;
	const char* str2 = _str2;
	while (*(str1) == *(str2) && *str1!='\0')
	{
		str1++;
		str2++;

	}
	if (*(str1) != '\0' && *(str2) != '\0')
	{
		return 0;
	}
	else
	{
		if (*str1- *str2 > 0)
		{
			return 1;
		}
		else
		{
			return -1;
		}
		
	}



}




void main()
{
	char* str[10] = { "hello","run1","father","mather","apple","world","123","moon","cookie","user" };
	char strx[10][10] = { "hello","run1","father","mather","apple","world","123","moon","cookie","user" };

	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (mystrcmpaddr(str[j], str[j + 1]) > 0)  //指针交换
			{
				char* strcemp[100] = { 0 };
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