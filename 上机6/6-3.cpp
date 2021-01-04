#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int n,max,min;
	printf("请输入整数\n");
	scanf("%d",&n);
	
	max=min=n;
	while(n!=-1){
		if(n>max)
		max=n;
		else if(n<min)
		min=n;
		scanf("%d",&n);
	}
	
	if(min>-1)
	min=-1;
	
	printf("最大值为%d,最小值为%d\n",max,min);
}
