#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double dis(double m,double n)
{
	return pow((n-m),2);
}

int main()
{
	double x1,x2,y1,y2;
	printf("�������һ���������");
	scanf("(%lf,%lf)",&x1,&y1);
	getchar();
	printf("������ڶ����������");
	scanf("(%lf,%lf)",&x2,&y2);
	printf("����֮��ľ���Ϊ%lf\n",pow((dis(x1,x2)+dis(y1,y2)),0.5));
	system("PAUSE");
	return 0;
	
}
