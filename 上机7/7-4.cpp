//�������� 
#include<stdio.h>
#include<stdlib.h>
 
void insert(int a[],int b,int c);//��������ÿ��һ�����ݣ����� 

int main()
{
	int a[10],c=0,b;
	printf("������10������");
	
	while(c<10){
		printf("\n");
		scanf("%d",&b);
		c++;
		insert(a,b,c);
	}
	
	printf("\n��С��������Ϊ��");
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
