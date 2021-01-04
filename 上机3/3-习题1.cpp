/*ÏÔÊ¾Î÷ÑóÆåÅÌ*/
#include<stdio.h>

int main(int argc, char** argv)

{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(j==1)
			printf(" ");
			for(int k=0;k<8;k++)
			{
			   printf("*");
			}
			printf("\n");
		}
	}
 } 
