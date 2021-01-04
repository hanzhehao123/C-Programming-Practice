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
	printf("请输入第一个点的坐标");
	scanf("(%lf,%lf)",&x1,&y1);
	getchar();
	printf("请输入第二个点的坐标");
	scanf("(%lf,%lf)",&x2,&y2);
	printf("两点之间的距离为%lf\n",pow((dis(x1,x2)+dis(y1,y2)),0.5));
	system("PAUSE");
	return 0;
	
}
