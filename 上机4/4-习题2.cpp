/*¼ÆËã½×³Ë*/
#include<iostream>

int jiecheng(int n){
	if(n>1)
	return n*jiecheng(n-1);
}

int main(int argc,char** argv)
{
    double s;
    for(int i=2;i<=10;i+=2){
    	s+=1.0/jiecheng(i); 
	}
	printf("%lf",s);
}
