#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long Fibonacci(long num);

int main()
{
	int size=0;
	printf("\n�˳�������Fibonacci����\n\n");
	printf("������ϣ���������������:");
	scanf("%d",&size);
	
	printf("\nFibonacci���еĵ�%d���ǣ�%8ld\n",size,Fibonacci(size));
	printf("\n");
} 

long Fibonacci(long num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return(Fibonacci(num-1)+Fibonacci(num-2));
	}
}
