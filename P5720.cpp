#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int d = 1;
	while(a>1){
		d++;
		a = int(a / 2);
	}
	printf("%d",d);
}
