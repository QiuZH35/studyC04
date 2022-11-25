

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
			pres = str1 + i;  //找到返回地址
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
	const char* pbak = _str;//备份首地址
	while (*pbak !='\0') //指针不断向前移动，遍历母串的每一个字符
	{
		int flag = 1;//假定相等
		char* pfind = pbak; //从当前的字符串循环母串
		char* psub = _substr; //从当前的字符循环子串
		while (*psub != '\0')
		{

			if (*pfind != '\0')  //母串提前结束
			{

				if (*pfind != *psub)  //判断字符不等
				{
					flag = 0;
					break;
				}
				else
				{
					pfind++;
					psub++;  //往前移动
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
			return pbak;  //保存当前地址
		}
		pbak++;
	}
	return NULL;

}





void main()
{
	char str[100] = "贪心不足蛇吞象";
	char* p = "贪心";

	char *px = mystrstraddr(str, p);

	if (px !=NULL)
	{
		printf("有相同的字串");
	}
	else
	{
		printf("没有相同字串");
	}




	system("pause");
}