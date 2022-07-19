#include<stdio.h>
bool isPrime(int n){
	for(int i = 2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int L;
	scanf("%d",&L);
	int sum =0,cnt=0;
	int a[1001];
	int i = 2;
	while(sum<L){
		if(isPrime(i)==true){
			a[i-2]=i;
			sum+=i;
			cnt++;
		}
		i++;
	}
	for(int i = 0;i<cnt-1;i++){
		printf("%d\n",a[i]);
	}
	printf("%d",cnt);
	return 0;
}
