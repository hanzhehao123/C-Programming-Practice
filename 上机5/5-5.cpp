#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long Fibonacci(long num);

int main()
{
	int size=0;
	printf("\n此程序将生成Fibonacci数列\n\n");
	printf("请输入希望计算的数列项数:");
	scanf("%d",&size);
	
	printf("\nFibonacci数列的第%d项是：%8ld\n",size,Fibonacci(size));
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
