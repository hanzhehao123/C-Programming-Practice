//������С�� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int n,int min);

int main()
{
	int a[10],n,i,min,result;
	printf("������������������ֵĸ���(<10)��\n");
	scanf("%d",&n);
	printf("������һ�����飺\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	result=search(a,n,min);
    printf("��С��Ϊ��%d",result);
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
