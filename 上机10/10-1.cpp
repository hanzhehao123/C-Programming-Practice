//����ʹ�����
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
		printf("��ʧ��");
		system("pause");
	}
	
l:	while(!feof(pfr))
	{
		char ch=fgetc(pfr);
		double number=fgetc(pfr);
		if(ch<'0'||ch>'9'){
			printf("x��Ϊ����");
			goto l;
		}
		else if(number<0||number>20){
			printf("x����0~20��");
			goto l;
		}
		else 
		fputc(cubie(number),pfw); 
	}
	fclose(pfr);
	fclose(pfw);
}
