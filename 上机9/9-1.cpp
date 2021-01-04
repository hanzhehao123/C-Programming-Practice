#include<stdio.h>
#include<stdlib.h> 


typedef struct PP{
		double x,y;
		}POINT;

typedef struct CC{
		POINT O;
 		double r;
		}CIRCLE;

int incircle(POINT p,CIRCLE c1)
{
	if((p.x-c1.O.x)*(p.x-c1.O.x)+(p.y-c1.O.y)*(p.y-c1.O.y)<=c1.r*c1.r)
	return 1;
	else return 0;
}

int main()

{
	POINT p1;
	CIRCLE C;
	
	printf("请输入点的坐标：\n");
	scanf("%lf,%lf",&p1.x,&p1.y);
	
	C.O.x=0;
	C.O.y=0;
	printf("请输入圆的半径：\n");
	scanf("%lf",&C.r); 
	
	printf("%d\n",incircle(p1,C));

}
