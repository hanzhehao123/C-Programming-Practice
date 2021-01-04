//请编写一个通用的菜单显示和驱动程序。
#include<stdio.h>
#include<stdlib.h>

void function1(int a); 
void function2(int b); 
void function3(int c);

int main()
{
	void (*f[3])(int)={function1,function2,function3};
	int choice;
	
	printf("请输入要选择的菜单的序号\n");
	printf("(1)程序\n");
	printf("(2)附件\n");
	printf("(3)游戏\n\n");
	scanf("%d",&choice);
	choice=choice-1;
	
	(*f[choice])(choice);
	
}

void function1(int a)
{
	printf("您输入的是%d,现在调用菜单项(1)程序\n",a+1);
}
void function2(int b)
{
	printf("您输入的是%d,现在调用菜单项(2)附件\n",b+1);
}
void function3(int c)
{
	printf("您输入的是%d,现在调用菜单项(3)游戏\n",c+1);
}
