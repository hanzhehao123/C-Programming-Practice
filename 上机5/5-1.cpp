#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float fun(int x)
{
	return pow((6*x+2),0.5);
}

int main(void)
{
	float sum=0;
	printf("����\t\tf(x)\t\t��ǰ��\n");
	for(int i=0;i<=1000;i+=50)
	{
	  printf("��%4d��\t%f\t%f\n",i,fun(i),sum+=fun(i));
	}
}
