#include<stdlib.h>
#include<stdio.h>

int main(int argc,char argv)
{
	
    float cm,foot,inch;
    scanf("%f",&cm);
    foot=cm*0.032808;
    inch=cm*0.393700;
    printf("%f,%f",foot,inch);
	

	system("PAUSE");
	return 0;
}
