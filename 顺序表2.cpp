#include<stdio.h>
#include<stdlib.h> 
#define INITSIZE 10 //默认的最大长度 
typedef struct{
	int *data;//指示动态分配数组的指针
	int MaxSize;//顺序表的最大容量 
	int length;//顺序表的当前长度 
}SeqList;		//顺序表的类型定义 

//初始化一个顺序表
void InitList(SeqList &L){
	//用malloc函数申请一片连续的存储空间 
	L.data = (int *)malloc(INITSIZE*sizeof(int));
	L.length = 0;
	L.MaxSize=INITSIZE; 
} 

//增加动态数组的长度
void IncreaseSize(SeqList L,int len){
	int *p = L.data;
	L.data =(int *)malloc((L.MaxSize+len)*sizeof(int));//申请一片新区域 
	for(int i = 0;i<L.length;i++){
		L.data[i]=p[i];//将数据复制到新区域 
	}
	L.MaxSize=L.MaxSize+len;
	free(p);
} 

//在顺序表L中查找第一个元素值等于e的元素，并返回其位序
int LocateElem(SeqList L,int e){
	for(int i = 0;i<L.length;i++)
		if(L.data[i]==e)
			return i+1;
	return 0;
} 

int main(){
	SeqList L;	//声明一个顺序表
	InitList(L);
	IncreaseSize(L,5);
	LocateElem(length,9);
	return 0; 
} 
