/*大小写转换*/

#include<iostream>

int main(int argc,char** argv)

{
	char c;
	printf("输入一个大写字母\n");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	c=c+32;
	printf("它的小写字母是\n%c\n",c);
 } 
