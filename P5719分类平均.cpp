#include<stdio.h>
#include<string.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int sumA = 0,sumB = 0;
	int cntA = 0,cntB = 0;
	for(int i = 1; i <= n; i++){
		if(i % k == 0){
			sumA += i;
			cntA++;
		}
		else{
			sumB += i;
			cntB++;
		}
	}
	printf("%.1f %.1f",1.0*sumA/cntA,1.0*sumB/cntB);
}  
