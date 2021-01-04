#include <stdio.h>  
#include <malloc.h>  
struct stu  
{  
    int num;  
    struct stu *next;  
};  

int main()  
{ int i;//用以遍历循环  
  int len;//链表长度  
  struct stu *p1,*p2,*head,*newhead,*newp;  
  p1=p2=head=(struct stu*)malloc(sizeof(struct stu));  
  printf("--------输入链表开始----------\n");  
  printf("输入一个节点(输入0则退出):\n");  
  scanf("%3d",&p1->num);  
  len=1;//长度加1  
  while(p1->num!=0)  
  {  
      p1=(struct stu*)malloc(sizeof(struct stu));//p1指向新节点  
      printf("继续输入节点(输入0则退出):\n");  
      scanf("%3d",&p1->num);  
      if (p1->num==0)  
        p2->next=NULL;//只有一个节点  
      else  
      {  
        p2->next=p1;  
        p2=p1;  
        len++;}  
  }  
  printf("---------输出原始链表----------\n");  
  p1=head;//初始化指针用以输出  
  for (i=1;i<=len;i++)  
  {  
      printf("%3d ",p1->num);  
      p1=p1->next;  
  }  
  printf("\n");  
  printf("------对原始链表排序并输出------\n");  
  for (i=1;i<=len;i++)  
  {  
    p1=p2=head;  
    while(p1->next!=NULL)//此循环非常重要，去指向每趟尾节点  
    {p2=p1;  
    p1=p1->next;//此时p1指向最后一个，p2为倒数第二个，注意循环条件  
    }  
    if(i==1)//第一趟时,将尾节点作为新的头结点  
       newhead=newp=p1;  
    else  
        newp=newp->next=p1;//每趟都新加入一个之前链表丢掉的节点  
    p2->next=NULL;//每趟的倒数第二个节的next都指向空，等于切断了倒数第一个节点  
  }  
  //输出逆序后的链表  
  p1=newhead;  
  for (i=1;i<=len;i++)  
  {printf("%4d",p1->num);  
   p1=p1->next;  
  }  
  printf("\n");  
} 

