//输入一个文件名，分别按照八进制、十六进制和ASCII
//码方式在屏幕上输出文件的内容。
#include<stdio.h>
#include<stdlib.h>



int main()
{
	FILE *pf;
	char path[100]="C:\\Users\\Administrator\\Desktop\\fliename.txt";
	
	pf=fopen(path,"r");
	if(pf==NULL)
	{
		printf("打开失败");
		system("pause");
	} 
	 
	else
	{
		char ch=fgetc(pf);
		while (ch!=EOF)
		{
			printf("o=%o x=%x c=%c\n",ch-48,ch-48,ch);
			ch=fgetc(pf);
			
		}
	}
	
	
	fclose(pf);
	
	
}
