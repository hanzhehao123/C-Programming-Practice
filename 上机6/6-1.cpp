#include <stdio.h>
#include <stdlib.h>

double f(int x)
{
	static int s=1;
	s*=x;
	return s;
}

int main()
{
	int a;
	double b=1;
	for(a=1;a<10;a++)
	b+=(double)1/f(a);	
	printf("e=%lf",b);
}


