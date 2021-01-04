/*请编写两个函数分别实现在字符串中查找指定字符、替换指定字符的功能。（习题
8.8 和习题8.9）。另外编写主函数，输入字符串和字符，调用上述两个函数。*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int search(char *str,char f);
void substitute(char f, char s, char *str);

int main()
{
	char str[80]={},f,s;
	int i=0;
	
	printf("请输入一串字符：\n");
	gets(str);
	
	printf("请输入查找字符：\n");
	scanf("%c",&f);
	getchar();
	printf("请输入要替换成的字符：\n");
	scanf("%c",&s);
	
	i=search(str,f);
	substitute(f,s,str);
	
	printf("字符%c出现次数为%d\n\n",f,i);
	printf("替换后字符串为:\n");
	puts(str);
	
}

int search(char *str,char f)
{
	int t = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == f){
            t++;
        }
    }
    return t;
}

void substitute(char f, char s, char *str)
{
	for (int i = 0; str[i] != '\0'; ++i) 
	{
        if (str[i] == f)
            str[i] = s;
	}
}
