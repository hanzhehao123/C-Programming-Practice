/*请编写一个函数，输入一个3×3 的矩阵，将其转置后返回。另外编写主函数输入矩
阵的数据值，并输出转置后的矩阵结果。*/ 
#include<stdio.h>
#include<stdlib.h>

void zhuanzhi(int a[][3],int b[][3]);

int main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("请输入3x3矩阵:\n");
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
     
     printf("转置后为:\n");
     for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         printf("%d\t",b[i][j]);
         printf("\n");
     }
}
