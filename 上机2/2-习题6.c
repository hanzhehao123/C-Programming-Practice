#include<stdlib.h>
#include<stdio.h>
#define PI 3.141592
int main(void)
{
	float a;
	scanf("%f",&a);
	printf("直径\n");
	printf("%f\n",a*2);
	printf("周长\n");
	printf("%f\n",a*2*PI);
    printf("面积\n");
    printf("%f\n",a*a*PI);


	system("PAUSE");
	return 0;
}
