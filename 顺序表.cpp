#include<stdio.h>
#include<stdlib.h> 
#define MAXSIZE 10 //定义最大长度 
typedef struct{
	int data[MAXSIZE];//用静态数组存放数据元素
	int length;//顺序表的当前长度 
}SqList;		//顺序表的类型定义 

//初始化一个顺序表
void InitList(SqList L){
	for(int i = 0;i<MAXSIZE;i++){
		L.data[i] = 0;
	}
	L.length = 0;
} 

////在L的位序i处插入元素e 
//void ListInsert(SqList L,int i,int e){
//	for(int j=L.length;j>=i;j--){//将第i个元素及之后的元素后移 
//		L.data[j]=L.data[j-1];
//	}
//	L.data[i-1]=e;//在位置i处放入e 
//	L.length++;//长度加1 
//}

bool ListInsert(SqList &L,int i,int e){
	if(i<1||i>L.length+1)	//判断i的范围是否有效 
		return false;
	if(L.length>=MAXSIZE)	//当前存储空间已满，不能插入 
		return false;	
	for(int j=L.length;j>=i;j--){//将第i个元素及之后的元素后移 
		L.data[j]=L.data[j-1];
	}
	L.data[i-1]=e;//在位置i处放入e 
	L.length++;//长度加1
	return true;
} 

bool ListDelete(SqList &L,int i,int &e){
	if(i<1||i>L.length)	//判断i的范围是否有效 
		return false;
	e=L.data[i-1];		//将被删除的元素赋值给e 
	for(int j=i;j<L.length;j++){//将第i个元素及之后的元素前移 
		L.data[j-1]=L.data[j];
	}
	L.length--;//长度减1
	return true;
}

int main(){
	SqList L;	//声明一个顺序表
	InitList(L);
	ListInsert(L,3,3); //插入操作
	int e = -1;		//用变量e把删除的元素带回来
	if(ListDelete(L,3,e))
		printf("已删除第三个元素，删除元素值为=%d\n",e);
	else
		printf("位序i不合法，删除失败\n"); 
	return 0; 
} 
