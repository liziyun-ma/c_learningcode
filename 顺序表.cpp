#include<stdio.h>
#include<stdlib.h> 
#define MAXSIZE 10 //������󳤶� 
typedef struct{
	int data[MAXSIZE];//�þ�̬����������Ԫ��
	int length;//˳���ĵ�ǰ���� 
}SqList;		//˳�������Ͷ��� 

//��ʼ��һ��˳���
void InitList(SqList L){
	for(int i = 0;i<MAXSIZE;i++){
		L.data[i] = 0;
	}
	L.length = 0;
} 

////��L��λ��i������Ԫ��e 
//void ListInsert(SqList L,int i,int e){
//	for(int j=L.length;j>=i;j--){//����i��Ԫ�ؼ�֮���Ԫ�غ��� 
//		L.data[j]=L.data[j-1];
//	}
//	L.data[i-1]=e;//��λ��i������e 
//	L.length++;//���ȼ�1 
//}

bool ListInsert(SqList &L,int i,int e){
	if(i<1||i>L.length+1)	//�ж�i�ķ�Χ�Ƿ���Ч 
		return false;
	if(L.length>=MAXSIZE)	//��ǰ�洢�ռ����������ܲ��� 
		return false;	
	for(int j=L.length;j>=i;j--){//����i��Ԫ�ؼ�֮���Ԫ�غ��� 
		L.data[j]=L.data[j-1];
	}
	L.data[i-1]=e;//��λ��i������e 
	L.length++;//���ȼ�1
	return true;
} 

bool ListDelete(SqList &L,int i,int &e){
	if(i<1||i>L.length)	//�ж�i�ķ�Χ�Ƿ���Ч 
		return false;
	e=L.data[i-1];		//����ɾ����Ԫ�ظ�ֵ��e 
	for(int j=i;j<L.length;j++){//����i��Ԫ�ؼ�֮���Ԫ��ǰ�� 
		L.data[j-1]=L.data[j];
	}
	L.length--;//���ȼ�1
	return true;
}

int main(){
	SqList L;	//����һ��˳���
	InitList(L);
	ListInsert(L,3,3); //�������
	int e = -1;		//�ñ���e��ɾ����Ԫ�ش�����
	if(ListDelete(L,3,e))
		printf("��ɾ��������Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n",e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n"); 
	return 0; 
} 
