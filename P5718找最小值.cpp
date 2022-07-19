#include<stdio.h>
int main(){
	int n;
	char str[100];
	scanf("%d",&n);
	for(int i = 0; i< n;i++){
		scanf("%d",&str[i]);
	}
	int min = str[0];
	for(int i = 0; i<n; i++){
		if(str[i]<min){
			min = str[i];
		}
	}
	printf("%d",min);
} 
