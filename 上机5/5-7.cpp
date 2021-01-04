#include<stdio.h>
#include<stdlib.h>

void convert(int n)
{
	int i;
	if((i=n/7)!=0) convert(i);
	putchar(n%7+'0');
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
