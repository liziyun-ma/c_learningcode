#include<stdio.h>
int jie(int i){
	if(i==1){
		return 1;
	}
	else{
		return jie(i-1)*i;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int S = 0;
	for(int i = 1; i <= n; i++){
		S += jie(i);
	}
	printf("%d",S);
}


