/*���д���������ֱ�ʵ�����ַ����в���ָ���ַ����滻ָ���ַ��Ĺ��ܡ���ϰ��
8.8 ��ϰ��8.9���������д�������������ַ������ַ���������������������*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int search(char *str,char f);
void substitute(char f, char s, char *str);

int main()
{
	char str[80]={},f,s;
	int i=0;
	
	printf("������һ���ַ���\n");
	gets(str);
	
	printf("����������ַ���\n");
	scanf("%c",&f);
	getchar();
	printf("������Ҫ�滻�ɵ��ַ���\n");
	scanf("%c",&s);
	
	i=search(str,f);
	substitute(f,s,str);
	
	printf("�ַ�%c���ִ���Ϊ%d\n\n",f,i);
	printf("�滻���ַ���Ϊ:\n");
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
