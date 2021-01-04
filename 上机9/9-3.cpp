//输出int类型的整数的每个字节 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	union
	{
		int n;
		char s[5];
	}x;
	int i;
	
	printf("输入一个整数:\n");
	scanf("%d",&x.n);
	
	for(i=0;i<sizeof(int);i++)
		printf("%d的第%d字节编码是：%x\n",x.n,i+1,x.s[i]&0xff);
	
}
