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
		printf("请输入一个十进制正整数：");
		scanf("%d",&number);
	}while(number<=0);
	
	printf("\n 转换为七进制数据，结果是：\n");
	
	convert(number);
	printf("\n");
	
}
