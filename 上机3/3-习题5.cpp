/*��Сдת��*/

#include<iostream>

int main(int argc,char** argv)

{
	char c;
	printf("����һ����д��ĸ\n");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	c=c+32;
	printf("����Сд��ĸ��\n%c\n",c);
 } 
