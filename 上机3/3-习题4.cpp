/*ƽ�����������Сֵ*/

#include<iostream>

int main(int argc,char** argv)

{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	printf("��:%d\n",a+b+c);
	printf("ƽ��ֵ:%f\n",(a+b+c)/3.0);
	printf("�˻�:%ld\n",a*b*c);
	if(a>=b&&a>=c) printf("�����:%d\n",a);
	if(b>=a&&b>=c) printf("�����:%d\n",b);
	if(c>=b&&c>=a) printf("�����:%d\n",c);
	if(a>=b&&a>=c) printf("��С��:%d\n",a);
	if(b>=a&&b>=c) printf("��С��:%d\n",b);
	if(c>=b&&c>=a) printf("��С��:%d\n",c);
 } 
