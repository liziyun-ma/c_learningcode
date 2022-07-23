#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//统计num补码中有几个1
int main()
{
	int num = 0;
	int cnt = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			cnt++;
		}
	}
	//32bit
	//num&1==1
	//00000000000000000000000000000011----num(右移判断最后一位)
	//00000000000000000000000000000001----1
	//00000000000000000000000000000001----1

	/*while (num)
	{
		if (num % 2 == 1)
		{
			cnt++;
		}
		num = num / 2;
	}*/
	printf("%d\n", cnt);
	return 0;
}