/*����λ��*/
#include<iostream>

int main(int argc,char** argv)
{
	int x,n,a,b,c,d;
l:printf("����һ��������4λ��������\n");
    scanf("%d",&x);
    if(x<=0){
    	printf("���������%d��һ������",x);goto l;
	}
	else if(x/10000>=1){
		printf("���������%d��һ��������λ������",x);goto l;
	}
	else if(x/1000>=1) n=4;
	else if(x>99) n=3;
	else if(x>9) n=2;
	else n=1;
	a=x/1000;b=(x-a*1000)/100;c=(x-1000*a-100*b)/10;d=x-a*1000-b*100-c*10;
	switch(n){
		case 4:printf("����һ��%dλ������λ�˻�λ%d*%d*%d*%d=%d\n",n,a,b,c,d,a*b*c*d);break;
		case 3:printf("����һ��%dλ������λ�˻�λ%d*%d*%d=%d\n",n,b,c,d,b*c*d);break;
		case 2:printf("����һ��%dλ������λ�˻�λ%d*%d=%d\n",n,c,d,c*d);break;
		default:printf("����һ��%dλ������λ�˻�λ%d=%d\n",n,d,d);break;
		
	}
}
