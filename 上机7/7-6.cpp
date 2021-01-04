//查找最小数 
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int n,int min);

int main()
{
	int a[10],n,i,min,result;
	printf("请输入你想输入的数字的个数(<10)：\n");
	scanf("%d",&n);
	printf("请输入一个数组：\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	result=search(a,n,min);
    printf("最小数为：%d",result);
}

int search(int a[],int n,int min)
{
    int i;
    min=a[0];
        
    for (i=0;i<n;i++)
    {
        if (a[i] < min)
            min = a[i];                
    }
    return min;
}
