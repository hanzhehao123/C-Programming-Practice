#include <stdio.h>  
#include <malloc.h>  
struct stu  
{  
    int num;  
    struct stu *next;  
};  

int main()  
{ int i;//���Ա���ѭ��  
  int len;//������  
  struct stu *p1,*p2,*head,*newhead,*newp;  
  p1=p2=head=(struct stu*)malloc(sizeof(struct stu));  
  printf("--------��������ʼ----------\n");  
  printf("����һ���ڵ�(����0���˳�):\n");  
  scanf("%3d",&p1->num);  
  len=1;//���ȼ�1  
  while(p1->num!=0)  
  {  
      p1=(struct stu*)malloc(sizeof(struct stu));//p1ָ���½ڵ�  
      printf("��������ڵ�(����0���˳�):\n");  
      scanf("%3d",&p1->num);  
      if (p1->num==0)  
        p2->next=NULL;//ֻ��һ���ڵ�  
      else  
      {  
        p2->next=p1;  
        p2=p1;  
        len++;}  
  }  
  printf("---------���ԭʼ����----------\n");  
  p1=head;//��ʼ��ָ���������  
  for (i=1;i<=len;i++)  
  {  
      printf("%3d ",p1->num);  
      p1=p1->next;  
  }  
  printf("\n");  
  printf("------��ԭʼ�����������------\n");  
  for (i=1;i<=len;i++)  
  {  
    p1=p2=head;  
    while(p1->next!=NULL)//��ѭ���ǳ���Ҫ��ȥָ��ÿ��β�ڵ�  
    {p2=p1;  
    p1=p1->next;//��ʱp1ָ�����һ����p2Ϊ�����ڶ�����ע��ѭ������  
    }  
    if(i==1)//��һ��ʱ,��β�ڵ���Ϊ�µ�ͷ���  
       newhead=newp=p1;  
    else  
        newp=newp->next=p1;//ÿ�˶��¼���һ��֮ǰ�������Ľڵ�  
    p2->next=NULL;//ÿ�˵ĵ����ڶ����ڵ�next��ָ��գ������ж��˵�����һ���ڵ�  
  }  
  //�������������  
  p1=newhead;  
  for (i=1;i<=len;i++)  
  {printf("%4d",p1->num);  
   p1=p1->next;  
  }  
  printf("\n");  
} 

