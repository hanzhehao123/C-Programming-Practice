#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max(int str[][2],int *p);
int min(int str[][2],int *p);
int avg(int str[][2],int *p);

int main()
{
	int a[10][2],i,numbera,numberb,numberc;
	int *p,*p1,*p2;
	p=&numbera;
	p1=&numberb;
	p2=&numberc;
	
	printf("������10��ѧ����ID�ͳɼ���\n");
	for(i=0;i<10;i++)
	{
	    scanf("%d,%d",&a[i][0],&a[i][1]);
	    getchar();
    }
    
    max(a,&numbera);
    min(a,&numberb);
    avg(a,&numberc);
	printf("���ѧ����%d,����Ϊ%d\n",numbera,max(a,&numbera));
	printf("���ѧ����%d,����Ϊ%d\n",numberb,min(a,&numberb));
	printf("��ӽ�ƽ��ѧ����%d,����Ϊ%d\n",numberc,avg(a,&numberc));
}

int max(int str[][2],int *p)
{
	int j,max;
	max=str[0][0];
	for(j=0;j<10;j++)
	    if(str[j][1]>max)
	      {
		      max=str[j][1];
		      *p=str[j][0];
	      }
	return(max);
}

int min(int str[][2],int *p)
{
	int j,min;
	min=str[0][1];
	*p=str[0][0];
	for(j=0;j<10;j++)
	    if(str[j][1]<min)
	      {
		      min=str[j][1];
		      *p=str[j][0];
	      }
	return(min);
}

int avg(int str[][2],int *p)
{
	int average,cha,i,j,min,chengji;
	average=0;
	
	for(i=0;i<10;i++)
	average+=str[i][1];
	average=(int)average/10;
	
	min=fabs(str[0][1]-average);
	
	for(j=0;j<10;j++)
	{
		cha=fabs(str[j][1]-average);
		if(min>cha)
		{
			 min=cha;
		      *p=str[j][0];
		      chengji=str[j][1];
		}
	}
	return(chengji);
}
