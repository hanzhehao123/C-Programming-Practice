#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	float a,rate,day,interest;//�������ʣ���������Ϣ
	printf("\n�����뱾��:");
	scanf("%f",&a); 
	if(a==-1) goto end;
	printf("\n������������:");
	scanf("%f",&rate);
	printf("\n����������:");
	scanf("%f",&day);
	
	while(a!=-1)
	{
		interest=a*rate*day/365;
		printf("\n��ϢΪ��%.1f\n",interest);
		printf("\n�����뱾��:");
	    scanf("%f",&a); 
	    if(a==-1) goto end;
	    printf("\n������������:");
	    scanf("%f",&rate);
	    printf("\n����������:");
	    scanf("%f",&day);
	}
end:	printf("�������");
}
