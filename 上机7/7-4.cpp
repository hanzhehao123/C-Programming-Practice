//插入排序 
#include<stdio.h>
#include<stdlib.h>
 
void insert(int a[],int b,int c);//数组名，每次一的数据，计数 

int main()
{
	int a[10],c=0,b;
	printf("请输入10个整数");
	
	while(c<10){
		printf("\n");
		scanf("%d",&b);
		c++;
		insert(a,b,c);
	}
	
	printf("\n由小到大排列为：");
	for(c=0;c<10;c++){
		printf("%d\t",a[c+1]);
	}
}

void insert(int a[],int b,int c)
{
	int j,k;
	for(j=c-1;(j>=0)&&(b<a[j]);j--){
		a[j+1]=a[j];
	}
	a[j+1]=b;
}
