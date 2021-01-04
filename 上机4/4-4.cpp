/*ÕÍ…∆≥Ã–Ú4*/
#include<iostream>

int main(int argc,char** argv)
{
	float x;
	int y;
 l:scanf("%f",&x);
    y=0;
    if(x>=0)
      {
      	if(x>0) y=1;
	  }
      else y=-1;
	printf("%d",y);
	goto l;
}
