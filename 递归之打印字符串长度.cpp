/*
����������ʱ���������ַ������� 
*/
#include<stdio.h>
#include<string.h>

//int my_strlen(char* str){
//	int cnt = 0;
//	while(*str !='\0'){
//		cnt++;
//		str++;
//	}
//	return cnt;
//}
//�ݹ�ķ��� 
int my_strlen(char* str){
	if(*str != '\0')
		return 1+my_strlen(str+1);
	else
		return 0;
} 
int main(){
	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d\n",len);
	int len = my_strlen(arr);//arr�����飬���鴫�Ρ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n",len); 
	return 0;
} 
