//�۰����
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int start,int end,int min);

int main()
{
	int a[10],i,key;
	printf("��������С����ʮ��������\n");
	for(i=0;i<10;i++)
	{
		printf("a[%i]",i);
		scanf("%d",&a[i]);
	}
	printf("\���ҹؼ���:\n");
	scanf("%d",&key);
	
	i=search(a,0,9,key);
	if(i!=-1)
	    printf("\�ؼ���%d����������%d��λ��\n",key,i);
	else
	    printf("\�ؼ���%dû�г�����������\n");
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

