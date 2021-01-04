//计算和错误处理
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 2.718281828459

double cubie(double a)
{
	double result;
	result=pow(a,3)*pow(e,a*sin(a));
	return result;
 } 

int main()
{
	FILE *pfr;
	FILE *pfw;
	char pathr[100]="C:\\Users\\Administrator\\Desktop\\experience.in";
	char pathw[100]="C:\\Users\\Administrator\\Desktop\\experience.out";
	
	pfr=fopen(pathr,"r") ;
	pfw=fopen(pathw,"w") ;
	if (pfr==NULL||pfw==NULL)
	{
		printf("打开失败");
		system("pause");
	}
	
l:	while(!feof(pfr))
	{
		char ch=fgetc(pfr);
		double number=fgetc(pfr);
		if(ch<'0'||ch>'9'){
			printf("x不为数字");
			goto l;
		}
		else if(number<0||number>20){
			printf("x不在0~20内");
			goto l;
		}
		else 
		fputc(cubie(number),pfw); 
	}
	fclose(pfr);
	fclose(pfw);
}
