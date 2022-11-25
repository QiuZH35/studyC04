
#include <stdio.h>
#include <stdlib.h>






void main()
{
	int best = 10000;
	int a[10] = { 190,198,147,199,204,206,107,209,196,189 };
	int x, y, z;
	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				int w = 600 - a[i] - a[k] - a[j];
				if (w < best && w >= 0)
				{
					best = w;
					x = a[i];
					y = a[j];
					z = a[k];
				}


			}
		}
	}
	printf("%d,%d,%d,%d\n", x, y, z, 600 - z - y - x);



	system("pause");
}




