#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ar[10]={11,13,15,17,19,21,23,25,27,29};
	int *pt;
	pt=ar;
	printf("输出 ara[0]的地址、p 的地址和内容。\n");
	printf("%p,%d,%p,%d\n",&ar[0],ar[0],&pt,pt);
	printf("按照同样样式输出以下表达式的内容：\n*pt+3、*pt、pt[3]、&*pt、*pt[3]、*(pt+3)、*pt++、*(pt++)、(*pt)++\n\n");
    printf("%p,%d,%p,%d,%p,%d,%p,%d,%p,%d,%p,%d,%p,%d\n\n",
	&*pt+3,*pt+3,&*pt,*pt,&pt[3],pt[3],&*(pt+3),*(pt+3),&*pt++,*pt++,&*(pt++),*(pt++));
	
}
