//格式转换 
#include<stdio.h>
#include<stdlib.h>



int main()
{
	FILE *pfr;
	FILE *pfw;
	char ch;
	char pathr[100]="C:\\Users\\Administrator\\Desktop\\flienamein.txt";
	char pathw[100]="C:\\Users\\Administrator\\Desktop\\flienameout.txt";
	
	pfr=fopen(pathr,"r");
	pfw=fopen(pathw,"w");
	if(pfr==NULL||pfw==NULL)
	{
		printf("打开文件失败");
		system("pause");
	}
	else while ( (ch = fgetc(pfr)) != EOF )
        {
            if ( ch == '\n' )
                putchar('\r');
            putchar(ch);
        }
	
}
