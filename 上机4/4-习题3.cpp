/*邮购店商品*/
#include<iostream>

int main(int argc,char** argv)
{
   int a,b;
   double result=0,c;/*a为产品号，b为销量,c为单价*/
   
   for(a=1;a<=5;a++){
   	printf("请输入上周%d号产品出售的数量：",a);
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
   printf("上周出售的产品总价值是：%.2f元\n",result); 
   
}
