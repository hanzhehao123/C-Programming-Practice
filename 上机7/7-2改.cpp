# include <stdio.h>
# include <stdlib.h>

int main (void)
{
  int num,a;
  char str[100];
  printf("������Ҫת������:\n");
  scanf("%d",&num);
  printf("������Ҫת���Ľ���:\n");
  scanf("%d",&a); 
  itoa(num, str, a);
  printf("��Ϊ%d��ת��Ϊ%d���ƽ��Ϊ%s\n",num,a, str);
}

