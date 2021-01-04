#include<stdlib.h>
#include<stdio.h>

int main(int argc,char argv)
{
	int a,b;
	scanf("%d,%d",&a,&b);
	if(a%b)printf("%d不是%d的倍数\n",a,b);

    else printf("%d是%d的倍数\n",a,b);


	system("PAUSE");
	return 0;
}
