/*
求n的阶乘 
*/
#include<stdio.h>
int Fac1(int n){
	int i = 0;
	int ret = 1;
	for(i=1;i<=n;i++){
		ret *= i;
	}
	return ret;
} 

int Fac2(int n){
	if(n<=1)
		return 1;
	else
		return n*Fac2(n-1);
}
int main(){
	int n = 0;
	scanf("%d",&n);
	int ret = Fac1(n);//循环的方式 
	printf("%d\n",ret);
	return 0;
} 
