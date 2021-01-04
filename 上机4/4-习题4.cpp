/*猴子吃桃*/
#include<iostream>

int main(int argc,char** argv)
{
   int day,a,b;
   
   day=9;
   b=1;
   while(day>0){
   	a=(b+1)*2;
   	b=a;
   	day--;
   }
   printf("桃子总数=%d\n\n",a);
}
