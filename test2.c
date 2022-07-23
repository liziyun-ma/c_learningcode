#define _CRT_SECURE_NO_WARNINGS 1
//不能创建临时变量，实现交换两个变量的值

#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("before:a = %d,b = %d\n", a, b);

	////加减法-可能会溢出
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//异或的方法
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("after:a = %d,b = %d\n", a, b);
	return 0;
}