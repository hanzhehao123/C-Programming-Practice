//����һ���ļ������ֱ��հ˽��ơ�ʮ�����ƺ�ASCII
//�뷽ʽ����Ļ������ļ������ݡ�
#include<stdio.h>
#include<stdlib.h>



int main()
{
	FILE *pf;
	char path[100]="C:\\Users\\Administrator\\Desktop\\fliename.txt";
	
	pf=fopen(path,"r");
	if(pf==NULL)
	{
		printf("��ʧ��");
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
