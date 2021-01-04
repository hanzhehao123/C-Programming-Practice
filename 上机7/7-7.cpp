//线性查找 
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int count,int key);

int main()
{
	int a[10],i,key;
	printf("请输入十个整数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\查找关键字:\n");
	scanf("%d",&key);
	
	i=search(a,10,key);
	if(i!=-1)
	    printf("\关键字%d出现在数组%d号位置\n",key,i+1);
	else
	    printf("\关键字%d没有出现在数组中\n");
}

int search(int a[],int count,int key)
{
	int t;
	for(t=0;t<count;t++)
	    if(key==a[t]) return t;
	return -1;
}
