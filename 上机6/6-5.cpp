#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	float a,rate,day,interest;//本金，利率，天数，利息
	printf("\n请输入本金:");
	scanf("%f",&a); 
	if(a==-1) goto end;
	printf("\n请输入年利率:");
	scanf("%f",&rate);
	printf("\n请输入天数:");
	scanf("%f",&day);
	
	while(a!=-1)
	{
		interest=a*rate*day/365;
		printf("\n利息为：%.1f\n",interest);
		printf("\n请输入本金:");
	    scanf("%f",&a); 
	    if(a==-1) goto end;
	    printf("\n请输入年利率:");
	    scanf("%f",&rate);
	    printf("\n请输入天数:");
	    scanf("%f",&day);
	}
end:	printf("程序结束");
}
