#include<stdio.h>
#include<stdlib.h> 
#define INITSIZE 10 //Ĭ�ϵ���󳤶� 
typedef struct{
	int *data;//ָʾ��̬���������ָ��
	int MaxSize;//˳����������� 
	int length;//˳���ĵ�ǰ���� 
}SeqList;		//˳�������Ͷ��� 

//��ʼ��һ��˳���
void InitList(SeqList &L){
	//��malloc��������һƬ�����Ĵ洢�ռ� 
	L.data = (int *)malloc(INITSIZE*sizeof(int));
	L.length = 0;
	L.MaxSize=INITSIZE; 
} 

//���Ӷ�̬����ĳ���
void IncreaseSize(SeqList L,int len){
	int *p = L.data;
	L.data =(int *)malloc((L.MaxSize+len)*sizeof(int));//����һƬ������ 
	for(int i = 0;i<L.length;i++){
		L.data[i]=p[i];//�����ݸ��Ƶ������� 
	}
	L.MaxSize=L.MaxSize+len;
	free(p);
} 

//��˳���L�в��ҵ�һ��Ԫ��ֵ����e��Ԫ�أ���������λ��
int LocateElem(SeqList L,int e){
	for(int i = 0;i<L.length;i++)
		if(L.data[i]==e)
			return i+1;
	return 0;
} 

int main(){
	SeqList L;	//����һ��˳���
	InitList(L);
	IncreaseSize(L,5);
	LocateElem(length,9);
	return 0; 
} 
