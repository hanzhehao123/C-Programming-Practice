#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
 int nDate;
 struct node *next;
}Node;

//链表输出
void output(Node *head)
{
 Node *p = head->next;
 while(NULL != p)
 {
  printf("%d  ", p->nDate); 
  p = p->next;
 }
 printf("\r\n");
}

//链表建立
Node* creat()
{
 Node *head = NULL, *p = NULL, *s = NULL;
 int Date = 0, cycle = 1;
 head = (Node*)malloc(sizeof(Node));
 head->next = NULL;
 
 p = head;
 while(cycle)
 {
  printf("请输入数据且当输入数据为0时结束输入\r\n");
  scanf("%d", &Date);
  if(0 != Date)
  {
   s = (Node*)malloc(sizeof(Node));
   s->nDate = Date;
   p->next = s;
   p = s;
  }
  else
  {
   cycle = 0;
  }
 }
 p->next = NULL;
 return(head);
}

//链表按值查找
Node *find(Node *phead,int data) 
{
	if(phead)
	{
		Node *res=find(phead->next,data);
		if(res)
			return res;
		else
		{
			if(phead->nDate==data)
				return phead;
			
		}
	}
	return NULL;
}


int main()
{
 int date, num;    //待查找数据
 Node *p;
 Node *Head = NULL;   //定义头结点
 Node *Head_New = NULL;

 //链表建立
 Head = creat();
 printf("输出建立的单链表\r\n");
 output(Head);

 //链表按值查找
 printf("请输入待查找的数据\r\n");
 scanf("%d", &date);
 p=find(Head, date);
 if(p==NULL)
	 printf("链表中没有找到该值");
 else
	 printf("要查找的值%d在链表中第%p位置\r\n", date,p->next);

 return 0;
}

