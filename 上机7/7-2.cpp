#include<stdio.h>

int main()
{
  int a,b;
  char s[100];
  int i=0,rem;
  printf("请输入整数:\n"); 
  scanf("%d",&a); 
  printf("请输入一个基数（2~16）\n");
  scanf("%d",&b);
  
  do{
     rem=a%b; a=a/b;
     s[i]=rem;
     i++;
  }while(a!=0);
  
  printf("输出的%d进制：",b); 
  while(i>0)
  printf("%d",s[--i]); 
  printf("\n");
}
