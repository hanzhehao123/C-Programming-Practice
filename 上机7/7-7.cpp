//���Բ��� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int search(int a[],int count,int key);

int main()
{
	int a[10],i,key;
	printf("������ʮ��������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\���ҹؼ���:\n");
	scanf("%d",&key);
	
	i=search(a,10,key);
	if(i!=-1)
	    printf("\�ؼ���%d����������%d��λ��\n",key,i+1);
	else
	    printf("\�ؼ���%dû�г�����������\n");
}

int search(int a[],int count,int key)
{
	int t;
	for(t=0;t<count;t++)
	    if(key==a[t]) return t;
	return -1;
}
