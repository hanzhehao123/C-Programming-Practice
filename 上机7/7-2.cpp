#include<stdio.h>

int main()
{
  int a,b;
  char s[100];
  int i=0,rem;
  printf("����������:\n"); 
  scanf("%d",&a); 
  printf("������һ��������2~16��\n");
  scanf("%d",&b);
  
  do{
     rem=a%b; a=a/b;
     s[i]=rem;
     i++;
  }while(a!=0);
  
  printf("�����%d���ƣ�",b); 
  while(i>0)
  printf("%d",s[--i]); 
  printf("\n");
}
