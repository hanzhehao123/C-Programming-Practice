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
		printf("������һ��ʮ������������");
		scanf("%d",&number);
	}while(number<=0);
	
	printf("\n ת��Ϊ�߽������ݣ�����ǣ�\n");
	
	convert(number);
	printf("\n");
	
}
