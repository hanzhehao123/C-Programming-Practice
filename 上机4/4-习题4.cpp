/*���ӳ���*/
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
   printf("��������=%d\n\n",a);
}
