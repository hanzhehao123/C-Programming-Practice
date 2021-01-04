#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int a,w,s;//基础，工资，销售额
	a=200;
	printf("请输入员工销售额:");
	scanf("%d",&s);
	
	while(s!=-1)
	{
		w=a+0.09*s;
		printf("该员工工资为：%d\n",w);
		printf("请输入员工销售额:");
		scanf("%d",&s);
	 } 
	 printf("程序结束\n");
}
