/*���дһ������������һ��3��3 �ľ��󣬽���ת�ú󷵻ء������д�����������
�������ֵ�������ת�ú�ľ�������*/ 
#include<stdio.h>
#include<stdlib.h>

void zhuanzhi(int a[][3],int b[][3]);

int main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("������3x3����:\n");
	for(i=0;i<3;i++)
	scanf("%d,%d,%d",&a[i][0],&a[i][1],&a[i][2]);
	
	zhuanzhi(a,b);
}

void zhuanzhi(int a[][3],int b[][3])
{
     int i,j;
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     b[j][i]=a[i][j];
     
     printf("ת�ú�Ϊ:\n");
     for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         printf("%d\t",b[i][j]);
         printf("\n");
     }
}
