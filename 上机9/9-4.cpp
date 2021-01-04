//合并两个链表 
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node * creat();
void print(struct node *head);
void concatenate(struct node *head1,struct node *head2);

int main()
{
	struct node *head1,*head2;
	
	head1=creat();
	printf("\n第一个链表的内容是：\n");
	print(head1);
	
	head2=creat();
	printf("\n第二个链表的内容是：\n");
	print(head2);
	
	concatenate(head1,head2);
	printf("合并后第一个链表内容是：\n");
	print(head1);
		
}

struct node * creat()
{
	struct node *head,*New,*tail;
	int n;
	
	head=NULL;
	
	printf("\n正在创建链表，请输入整数，以-1结束创建！\n\n");
	scanf("%d",&n);
	while(n!=-1)
	{
		New=(struct node*)malloc(sizeof(struct node));
		New->data=n;
		New->next=NULL;
		
		if(head==NULL)
			head = New;
		else
			tail->next = New;
			
		tail=New;
		scanf("%d",&n);
		
	}
	fflush(stdin);
	return(head);
}

void print(struct node *head)
{
	struct node *p;
	int n=0;
	
	p=head;
	
	while(p!=NULL)
	{
		printf("%8d\t",p->data);
		n++;
		if(n%5==0)  printf("\n");
		p=p->next;
	}
	printf("\n\n");
}

void concatenate(struct node *head1,struct node *head2)
{
	struct node *p;
	
	p=head1;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	
	p->next=head2;
}
