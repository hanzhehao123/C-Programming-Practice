/*�ʹ�����Ʒ*/
#include<iostream>

int main(int argc,char** argv)
{
   int a,b;
   double result=0,c;/*aΪ��Ʒ�ţ�bΪ����,cΪ����*/
   
   for(a=1;a<=5;a++){
   	printf("����������%d�Ų�Ʒ���۵�������",a);
   	do{
   		scanf("%d",&b);
	   }while(b<0);
	   
	   switch(a){
	   	  case 1:c=2.98;break;
	   	  case 2:c=4.50;break;
	   	  case 3:c=9.98;break;
	   	  case 4:c=4.49;break;
	   	  case 5:c=6.87;
	   }
	   result+=b*c;
   }
   printf("���ܳ��۵Ĳ�Ʒ�ܼ�ֵ�ǣ�%.2fԪ\n",result); 
   
}
