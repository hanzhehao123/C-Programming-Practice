#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
 int nDate;
 struct node *next;
}Node;

//�������
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

//������
Node* creat()
{
 Node *head = NULL, *p = NULL, *s = NULL;
 int Date = 0, cycle = 1;
 head = (Node*)malloc(sizeof(Node));
 head->next = NULL;
 
 p = head;
 while(cycle)
 {
  printf("�����������ҵ���������Ϊ0ʱ��������\r\n");
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

//����ֵ����
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
 int date, num;    //����������
 Node *p;
 Node *Head = NULL;   //����ͷ���
 Node *Head_New = NULL;

 //������
 Head = creat();
 printf("��������ĵ�����\r\n");
 output(Head);

 //����ֵ����
 printf("����������ҵ�����\r\n");
 scanf("%d", &date);
 p=find(Head, date);
 if(p==NULL)
	 printf("������û���ҵ���ֵ");
 else
	 printf("Ҫ���ҵ�ֵ%d�������е�%pλ��\r\n", date,p->next);

 return 0;
}

