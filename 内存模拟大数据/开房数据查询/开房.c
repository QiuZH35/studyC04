#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <memory.h> //内存操作
#define Path "D:\\百度网盘\\c语言\\大数据相关数据\\kaifangX.txt"

char ** g_pp;
int imax = 20151574; //显示最长行数





int getimax()
{
	int hang = -1;
	FILE* pf = fopen(Path, "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	else
	{
		hang = 0;
		while (!feof(pf))
		{
			char readstr[1024] = { 0 };
			fgets(readstr, 1024, pf);//读取一行
			hang++;

		}



	}
	fclose(pf);


	return hang;
}





void loadfromflie() //载入内存
{
	g_pp = (char**)malloc(sizeof(char*) * imax); //分配指针数组
	memset(g_pp, '\0', sizeof(char*) * imax); //内存清零
	FILE* pf = fopen(Path, "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	else
	{

		for (int i = 0; i < imax; i++)
		{
			char str[1024] = { 0 };
			fgets(str, 1024, pf);//按行读取
			str[1024 - 1] = '\0';
			int strlength = strlen(str);
			
			g_pp[i] = malloc(sizeof(char) * (strlength + 1));//处理\0
			if (g_pp[i]!= NULL)
			{
				strcpy(g_pp[i],str);
			}
			
			
		}

		

	}
	fclose(pf);

}

void search(char* str)
{
	char strpath[100] = {0};
	sprintf(strpath,"D:\\%s.txt",str);
	FILE* pf = fopen(strpath,"w");  //写入模式

	if (g_pp != NULL)
	{
		for (int i = 0; i < imax; i++)
		{
			if (g_pp[i] != NULL)
			{
				char* p = strstr(g_pp[i], str);//找到返回地址，找不到返回null
				if (p != NULL)
				{
					puts(g_pp[i]);
					fputs(g_pp[i], pf);
				}
			}
			
		}

	}



	fclose(pf);
	system(strpath);
}









void main()
{
	//printf("%d", getjmax());
	//printf("%d", getimax());
	
	//printf("hello ");
	loadfromflie();
	
	


	while (1)
	{
		printf("检测完成\n");
		char str[200] = { 0 };
		scanf("%s",str);
		
		search(str);
	}




	system("pause");
}