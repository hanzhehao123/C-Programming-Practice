#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void convert(int n)
{
    int i;
    char seven[MAX];
    i=0;
    while(n)
    {
    	seven[i]=n%7+'0';
    	n=n/7;
    	i++;
	}
	
	while(--i>=0)
	{
		putchar(seven[i]);
	}
}

int main()
{
	int number;
	
	do{
		printf("������һ��ʮ������������");
		scanf("%d",&number);
	}while(number<=0);
	
	printf("\n ת��Ϊ�߽������ݣ�����ǣ�\n");
	
	convert(number);
	printf("\n");
	
}
