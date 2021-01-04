#include<stdio.h>

int main()
{
  int a;
  char s[100];
  int i=0,rem;
  printf("请输入整数:\n"); 
  scanf("%d",&a); 
  
  do{
     rem=a%2; a=a/2;
     s[i]=rem;
     i++;
  }while(a!=0);
  
  printf("输出的二进制："); 
  while(i>0)
  printf("%d",s[--i]); 
  printf("\n");
}
