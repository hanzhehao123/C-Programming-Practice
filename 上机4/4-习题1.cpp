/*�ɼ�*/
#include<iostream>

int main(int argc,char** argv)
{
	int x;
l:  printf("������ɼ�:\n");
    scanf("%d",&x);
	if(x<0){printf("���������%d��һ������0",x);goto l;} 
	else if(x>100){printf("���������%d��һ������100����",x);goto l;}
	else if(x>=90&&x<=100) printf("A");
	else if(x>=80&&x<90) printf("B");
	else if(x>=70&&x<80) printf("C");
	else if(x>=60&&x<70) printf("D");
	else printf("E");
}
