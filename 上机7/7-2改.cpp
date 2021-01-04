# include <stdio.h>
# include <stdlib.h>

int main (void)
{
  int num,a;
  char str[100];
  printf("请输入要转化的数:\n");
  scanf("%d",&num);
  printf("请输入要转化的进制:\n");
  scanf("%d",&a); 
  itoa(num, str, a);
  printf("数为%d，转化为%d进制结果为%s\n",num,a, str);
}

