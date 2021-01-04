#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
 	int num;
 	char name[20];
 	float score[3], average;
}STUDENT;

int main()
{
 	int i,j,k;
 	k=0;
 	STUDENT std[10] = {0}, temp;
	puts("请输入学生的信息: ");
 
 	for (i = 0; i < 10; ++i)
 	{
  		scanf("%d%s", &std[i].num, std[i].name);
  		for (j = 0; j < 3; ++j)
  		{
   			scanf("%f", &std[i].score[j]);
   			std[i].average += std[i].score[j];
  	}
  		std[i].average /= 3;
 	}
 
 	for (i = 0; i < 9; ++i)
 	{
  		for (j = 0; j < 9 - i; ++j)
  		{
   			if (std[j].average < std[j + 1].average)
   		{
    		temp = std[j];
    		std[j] = std[j + 1];
    		std[j + 1] = temp;
   		}
  		}
 	}
 
 	for (i = 0; i < 10; ++i)
 	{
 		printf("Num=%d Name=%-6s ", std[i].num, std[i].name);
  		printf("Score1=%0.2f Score2=%0.2f Score3=%0.2f ", std[i].score[0], std[i].score[1], std[i].score[2]);
  		printf("Average=%0.2f\n", std[i].average);
  		if(std[i].average>85)
  		k++;
 	}
 	printf("成绩在85分以上的人数为%d",k);
 		return 0;
}
