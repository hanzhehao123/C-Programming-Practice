//折半查找
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int start,int end,int min);

int main()
{
	int a[10],i,key;
	printf("请输入由小到大十个整数：\n");
	for(i=0;i<10;i++)
	{
		printf("a[%i]",i);
		scanf("%d",&a[i]);
	}
	printf("\查找关键字:\n");
	scanf("%d",&key);
	
	i=search(a,0,9,key);
	if(i!=-1)
	    printf("\关键字%d出现在数组%d号位置\n",key,i);
	else
	    printf("\关键字%d没有出现在数组中\n");
}

int search(int a[],int start,int end,int key)
{
    int low,high,mid;
    low=start;
    high=end;
        
    while(low<=high)
    {
    	mid=(low+high)/2;
    	if(key<a[mid]) high=mid-1;
    	else if(key>a[mid]) low=mid+1;
    	else return mid;
	}
	return -1;
}

