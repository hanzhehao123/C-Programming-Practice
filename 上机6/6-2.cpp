#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	float a,b,c,deta;
	float s,s1,s2;
	printf("������ϵ��(���ౣ��һλС��)a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("����Ϊ%.1fx^2+%.1fx+%.1f=0\n",a,b,c);
	deta=b*b-4*a*c;
	if(deta<0) 
	    printf("�����޸�\n");
	else if(deta==0)
	    {
	    	s=-b/(2*a);
		    printf("���̽���һ��,��Ϊ%f\n",s);
		}
	else if(deta>0)
	    {
		    s1=(-b+pow(deta,0.5))/(2*a);
		    s2=(-b-pow(deta,0.5))/(2*a);
			printf("���̸�Ϊx1=%f,x2=%f",s1,s2);
		}
 } 
