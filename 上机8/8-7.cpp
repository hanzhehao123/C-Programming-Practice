//���дһ��ͨ�õĲ˵���ʾ����������
#include<stdio.h>
#include<stdlib.h>

void function1(int a); 
void function2(int b); 
void function3(int c);

int main()
{
	void (*f[3])(int)={function1,function2,function3};
	int choice;
	
	printf("������Ҫѡ��Ĳ˵������\n");
	printf("(1)����\n");
	printf("(2)����\n");
	printf("(3)��Ϸ\n\n");
	scanf("%d",&choice);
	choice=choice-1;
	
	(*f[choice])(choice);
	
}

void function1(int a)
{
	printf("���������%d,���ڵ��ò˵���(1)����\n",a+1);
}
void function2(int b)
{
	printf("���������%d,���ڵ��ò˵���(2)����\n",b+1);
}
void function3(int c)
{
	printf("���������%d,���ڵ��ò˵���(3)��Ϸ\n",c+1);
}
