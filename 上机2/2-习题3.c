#include<stdlib.h>
#include<stdio.h>

int main(int argc,char argv)
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("a.b的和，差，积，商，余数\n"); 
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);

	system("PAUSE");
	return 0;
}
