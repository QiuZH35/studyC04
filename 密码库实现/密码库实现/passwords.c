#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define path "D:\\"

void swap(char* array, char* begin)
{
		int temp = *array;
		*array = *begin;
		*begin = temp;
	
}

char str[] = "123456";
int ipost = 1;


void printall(char * arr)
{
	if (!*arr)
	{
		printf("%d,%s\n", ipost++, str);
		char mystr[100] = { 0 };
		sprintf(mystr, "echo %s>>D:\\password.txt",str); //Ð´ÈëÎÄ¼þ
		system(mystr);
	}
	
	for (char* p = arr; *p != '\0'; p++)
	{
		swap(p,arr);  //1 N-1   1 2
		printall(arr + 1);
		swap(p, arr);// N-1 1   2 1
	}

}




void main()
{
	printall(str);



	

	system("pause");
}