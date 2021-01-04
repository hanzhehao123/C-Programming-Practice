/*1¼Óµ½100*/
#include<iostream>

int main(int argc,char** argv)
{
	float k=1.0;
	int sum=0;
    do{
    	sum+=k;
    	k++;
	}while(k!=101.0);
	printf("%d",sum);
}
