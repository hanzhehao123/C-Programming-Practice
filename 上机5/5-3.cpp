#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();/*Ͷ��Ӳ�Һ���˵��*/

int main()
{
	int num,side1=0,side2=0;
	time_t t;
	
	printf("\nģ��Ͷ��100�Σ�ͳ����������ִ���\n\n");
	
	srand((unsigned int)time(&t));
	
	for(num=1;num<=100;num++)
	{
		if(flip()==1)
		{
			printf("����\t");
			side1++;
		}
		else
		{
			printf("����\t");
			side2++;
			
		}
		if(num%10==0)
		   printf("\n");
	}
	
	printf("\nͶ��100�Σ��������%4d�Σ��������%4d��\n",side1,side2);
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
