#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long int count(int h,int m,int s);

int main()
{
	int h1,m1,s1;
	int h2,m2,s2;
	
	printf("请输入一个时间:");
	do{
		scanf("%d:%d:%d",&h1,&m1,&s1);
	}while(h1<0||h1>11||m1<0||m1>59||s1<0||s1>59);
	
	printf("请输入第二个时间:");
	do{
		scanf("%d:%d:%d",&h2,&m2,&s2);
	}while(h2<0||h2>11||m2<0||m2>59||s2<0||s2>59);
	
	printf("这两个时间之间的间隔是:%ld秒\n",
	   labs(count(h2,m2,s2)-count(h1,s1,m1)));
	   
}

long int count(int h, int m,int s)
{
	long int sum=0;
	sum=(h*60+m)*60+s;
	return sum;
}
