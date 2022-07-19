#include<stdio.h>
#include<string.h>
int main(){
	char IS[14];
	gets(IS);
	int j = 1,sum = 0;
	for(int i = 0 ;i < 11;i++){
		if(IS[i] != '-'){
			sum += (IS[i]-'0')*j;
			j++;
		}
	}
	if((sum % 11 == 10 && IS[13] == 'X') || (sum % 11 == (IS[13] -'0'))){
		printf("Right");
	}else{
		IS[13] = char(sum % 11);
		puts(IS);
	}
	return 0;
} 
