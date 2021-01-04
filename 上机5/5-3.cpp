#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();/*投掷硬币函数说明*/

int main()
{
	int num,side1=0,side2=0;
	time_t t;
	
	printf("\n模拟投掷100次，统计正反面出现次数\n\n");
	
	srand((unsigned int)time(&t));
	
	for(num=1;num<=100;num++)
	{
		if(flip()==1)
		{
			printf("正面\t");
			side1++;
		}
		else
		{
			printf("反面\t");
			side2++;
			
		}
		if(num%10==0)
		   printf("\n");
	}
	
	printf("\n投掷100次，正面出现%4d次，反面出现%4d次\n",side1,side2);
	printf("\n");
}

int flip()
{
	int randNum;
	
	randNum=rand();
	
	if(randNum%2==0)
	   return 1;
	else
	   return 0;
}
