#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int a,w,s;//���������ʣ����۶�
	a=200;
	printf("������Ա�����۶�:");
	scanf("%d",&s);
	
	while(s!=-1)
	{
		w=a+0.09*s;
		printf("��Ա������Ϊ��%d\n",w);
		printf("������Ա�����۶�:");
		scanf("%d",&s);
	 } 
	 printf("�������\n");
}
