#include<stdio.h>

int main()
{
  int a;
  char s[100];
  int i=0,rem;
  printf("����������:\n"); 
  scanf("%d",&a); 
  
  do{
     rem=a%2; a=a/2;
     s[i]=rem;
     i++;
  }while(a!=0);
  
  printf("����Ķ����ƣ�"); 
  while(i>0)
  printf("%d",s[--i]); 
  printf("\n");
}
