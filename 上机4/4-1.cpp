/*ÕÍ…∆≥Ã–Ú*/
#include<iostream>

int main(int argc,char** argv)
{
	float x;
	int y;
 l:scanf("%f",&x);
	if(x>0) y=-1;
	else if(x==0) y=0;
	else y=1;
	printf("%d",y);
	goto l;
}
