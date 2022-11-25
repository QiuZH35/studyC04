

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* mystrstr(const char *str1,const char * str2)
{
	if (str1 == NULL || str2 == NULL)
	{
		return NULL;
	}
	char* pres = NULL;
	int alllength = strlen(str1);
	int sublength = strlen(str2);
	for (int i = 0; i < alllength - sublength; i++)
	{
		int flag = 1;
		for (int j = 0; j < sublength; j++)
		{
			if (str2[j] != str1[j + i])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			pres = str1 + i;  //�ҵ����ص�ַ
			return pres;
		}
		



	}
	return pres;


}
char* mystrstraddr(const char* _str, const char* _substr)
{
	if (_str == NULL || _substr == NULL)
	{
		return NULL;
	}
	const char* pbak = _str;//�����׵�ַ
	while (*pbak !='\0') //ָ�벻����ǰ�ƶ�������ĸ����ÿһ���ַ�
	{
		int flag = 1;//�ٶ����
		char* pfind = pbak; //�ӵ�ǰ���ַ���ѭ��ĸ��
		char* psub = _substr; //�ӵ�ǰ���ַ�ѭ���Ӵ�
		while (*psub != '\0')
		{

			if (*pfind != '\0')  //ĸ����ǰ����
			{

				if (*pfind != *psub)  //�ж��ַ�����
				{
					flag = 0;
					break;
				}
				else
				{
					pfind++;
					psub++;  //��ǰ�ƶ�
				}

			}
			else
			{
				flag = 0;
				break;
			}




		}

		if (flag)
		{
			return pbak;  //���浱ǰ��ַ
		}
		pbak++;
	}
	return NULL;

}





void main()
{
	char str[100] = "̰�Ĳ���������";
	char* p = "̰��";

	char *px = mystrstraddr(str, p);

	if (px !=NULL)
	{
		printf("����ͬ���ִ�");
	}
	else
	{
		printf("û����ͬ�ִ�");
	}




	system("pause");
}