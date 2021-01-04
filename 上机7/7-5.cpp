//关键词统计 
#include<stdio.h>
#include<stdlib.h>
 
char words[5][100]={"apple","boy","cat","dog","eleven"};

int main()
{
	char s[100],*w;
	int i,j,n[5]={0};
	
	printf("请输入一行字符:\n");
	gets(s);
	
	for(i=0;i<5;i++)
	{
		j=0;
		while(s[j]!='\0')
		{
			w=words[i];
			if(*w==s[j])
			{
				for(;s[j]!='\0'&&*w!='\0'&&*w==s[j];j++,w++);
				if(*w=='\0')
				n[i]++;
			}
			else j++;
		}
		printf("相匹配的单词%s出现%d次\n",words[i],n[i]);
	}
	
}
