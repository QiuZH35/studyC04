#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <memory.h> //�ڴ����
#define Path "D:\\�ٶ�����\\c����\\�������������\\kaifangX.txt"

char ** g_pp;
int imax = 20151574; //��ʾ�����





int getimax()
{
	int hang = -1;
	FILE* pf = fopen(Path, "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	else
	{
		hang = 0;
		while (!feof(pf))
		{
			char readstr[1024] = { 0 };
			fgets(readstr, 1024, pf);//��ȡһ��
			hang++;

		}



	}
	fclose(pf);


	return hang;
}





void loadfromflie() //�����ڴ�
{
	g_pp = (char**)malloc(sizeof(char*) * imax); //����ָ������
	memset(g_pp, '\0', sizeof(char*) * imax); //�ڴ�����
	FILE* pf = fopen(Path, "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	else
	{

		for (int i = 0; i < imax; i++)
		{
			char str[1024] = { 0 };
			fgets(str, 1024, pf);//���ж�ȡ
			str[1024 - 1] = '\0';
			int strlength = strlen(str);
			
			g_pp[i] = malloc(sizeof(char) * (strlength + 1));//����\0
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
	FILE* pf = fopen(strpath,"w");  //д��ģʽ

	if (g_pp != NULL)
	{
		for (int i = 0; i < imax; i++)
		{
			if (g_pp[i] != NULL)
			{
				char* p = strstr(g_pp[i], str);//�ҵ����ص�ַ���Ҳ�������null
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
		printf("������\n");
		char str[200] = { 0 };
		scanf("%s",str);
		
		search(str);
	}




	system("pause");
}