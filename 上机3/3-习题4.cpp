/*平均数。最大最小值*/

#include<iostream>

int main(int argc,char** argv)

{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	printf("和:%d\n",a+b+c);
	printf("平均值:%f\n",(a+b+c)/3.0);
	printf("乘积:%ld\n",a*b*c);
	if(a>=b&&a>=c) printf("最大数:%d\n",a);
	if(b>=a&&b>=c) printf("最大数:%d\n",b);
	if(c>=b&&c>=a) printf("最大数:%d\n",c);
	if(a>=b&&a>=c) printf("最小数:%d\n",a);
	if(b>=a&&b>=c) printf("最小数:%d\n",b);
	if(c>=b&&c>=a) printf("最小数:%d\n",c);
 } 
