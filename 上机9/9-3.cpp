//���int���͵�������ÿ���ֽ� 
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
	
	printf("����һ������:\n");
	scanf("%d",&x.n);
	
	for(i=0;i<sizeof(int);i++)
		printf("%d�ĵ�%d�ֽڱ����ǣ�%x\n",x.n,i+1,x.s[i]&0xff);
	
}
