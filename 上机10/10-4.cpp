#include<iostream> /*���ÿ⺯��*/  
#include<stdio.h> 
#include<string.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<windows.h> 
 
typedef struct book_info//����ͼ����Ϣ�Ľṹ������������µ������� 
{ 
	 char AN[10];            /*��¼��*/ 
	 char name[20];          /*����*/ 
	 char author[20];        /*������*/ 
	 char clc[10];           /*������*/ 
	 char company[20];       /*���浥λ*/ 
	 char date[20];          /*��������*/ 
	 char price[10];         /*�۸�*/ 
	 struct book_info *next; 
 }Booklist,*Pointer; 
 
int num=0;//ȫ�ֱ����Ķ��� 
Pointer Head=NULL;//ͷָ��Ϊ�� 
FILE *fp;//ָ���ļ���ָ�� 
 
                  /*��������*/ 
int menu_select();/*���˵�����*/ 
void Insert(Pointer * Head);/*¼�뺯��*/ 
void Scan(Pointer Head);/*��ʾ����*/ 
void Search_name(Pointer Head);/*���������Һ���*/ 
void Search_author(Pointer Head);/*�����������Һ���*/ 
void Listbyname(Pointer *Head);/*������������*/ 
void Delete(Pointer * Head);//ɾ������ 
void Update(Pointer Head);//�޸ĺ��� 
void Save();//���ı��ļ���ʽ���溯�� 
void Read();//�����ı��ļ����� 
void Exit();//�˳����� 
 
int main(void)//������
{ 
	system("cls");/*����ǰ����*/ 
	for(;;) 
	{ 
	  switch(menu_select()) 
	  { 
		case 1:Insert(& Head); 
	         break; 
		case 2:Scan(Head); 
	         break; 
		case 3:Search_name(Head); 
	         break; 
		case 4:Search_author(Head); 
	         break; 
		case 5:Listbyname(&Head); 
	         break; 
		case 6:Delete(&Head); 
	         break; 
		case 7:Update(Head); 
	      break; 
		case 8:Save(); 
	         break; 
		case 9:Read(); 
	         break; 
		case 0:Exit(); 
		default: 
		putchar('\a');
	  } 
	 } 
} 
 
int menu_select()//���˵����� 
{ 
  int a; 
  printf("\n\t\t\t��ӭʹ��ͼ����Ϣ����ϵͳ\n\n\n\n\n\t\t  ***** �밴���������ϵͳ�˵�! ***** \n"); 
  getch(); 
  system("cls"); 
  printf("\t\t********************MENU*********************\n");//���˵� 
  printf("\t\t    1. ¼��ͼ����Ϣ\n"); 
  printf("\t\t    2. ���ͼ����Ϣ\n"); 
  printf("\t\t    3. ��������ѯͼ����Ϣ\n"); 
  printf("\t\t    4. ����������ѯͼ����Ϣ\n"); 
  printf("\t\t    5. ͼ����Ϣ����\n"); 
  printf("\t\t    6. ɾ��ͼ����Ϣ\n"); 
  printf("\t\t    7. �޸�ͼ����Ϣ\n"); 
  printf("\t\t    8. ͼ�����ݱ���\n"); 
  printf("\t\t    9. ͼ����Ϣ�ļ���\n"); 
  printf("\t\t    0. �˳�\n"); 
  printf("\t\t***********************************************\n"); 
  do 
  { 
	printf("\n\t��ѡ��������Ҫ�ķ���"); 
	scanf("%d",&a); 
  } 
  while (a<0||a>9); 
  return a; 
} 
 
void Insert(Pointer * Head)  //¼��ͼ����Ϣ���� 
{ 
	char AN[10] ; 
	char c; 
	Pointer p,q,r; 
	
	printf("\n\t\t**************** ������ͼ����Ϣ ****************\n");/*
	��������*/  
	printf("\n\t\t�������¼��:"); 
	scanf("%s",AN); 
	p=q=*Head;//����¼���Ƿ��ظ�
	while(p!=NULL) 
	{ 
	if(strcmp(p->AN,AN)==0) 
	 { 
	  printf ("�Ѿ�����ͬ�ĵ�¼�Ū�");return;} 
	    else 
	    {q=p;p=p->next;} 
	} 
	r=(Pointer)malloc(sizeof(Booklist)); 
	r->next=NULL; 
	if(r==NULL) 
	{printf("����ռ�ʧ��!");return;} 
	
	if(q==NULL) 
	* Head=r; 
	else 
	{q->next=r;} 
	 
	strcpy(r->AN,AN); 
	 printf("\n\t\t��������:"); //¼��ͼ����Ϣ 
	 scanf("%s",r->name); 
	 getchar(); 
	 printf("\n\t\t����������:"); 
	 scanf("%s",r->author); 
	 getchar(); 
	 printf("\n\t\t��������:"); 
	 scanf("%s",r->clc) ; 
	 getchar(); 
	 printf("\n\t\t������浥λ:"); 
	 scanf("%s",r->company) ; 
	 getchar(); 
	 printf("\n\t\t�����������:"); 
	 gets(r->date) ; 
	 printf("\n\t\t����۸�:"); 
	 scanf("%s",r->price);  
	 do 
	{ 
		printf("\n\t\t¼��ɹ�!!!!"); 
		num++; 
		printf("ѡ���Ƿ����¼��(Y/N)?��");     /*����¼��ͼ����Ϣ*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Insert(Head); 
		else  
		{ 
			if(c=='n'||c=='N') 
		     return; 
		     else 
		 
		  printf("\n\t\t�����������������!!!"); 
		} 
	} while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
 
void Scan(Pointer Head)  //��ʾͼ����Ϣ���� 
{ 
	Pointer p; 
	p=Head; 
	if(p==NULL) 
	printf("��¼Ϊ��");//����Ƿ���ͼ����Ϣ 
	else 
	{ 
		printf("\n\t����%d����¼",num); 
		while(p!=NULL) 
	{ 
		printf("\n\n\t\t��¼�Ū�%-10s",p->AN);//��ʾͼ����Ϣ 
		printf("\n\t\t������    %-20s",p->name); 
		printf("\n\t\t��������  %-20s",p->author); 
		printf("\n\t\t����Ū�  %-10s",p->clc); 
		printf("\n\t\t���浥λ��%-20s",p->company); 
		printf("\n\t\t����ʱ�䪧%-20s",p->date); 
		printf("\n\t\t�۸�    ��%-10s",p->price); 
		p=p->next; 
	} 
		printf("\n\t\t�밴������ص����˵�"); 
		return; 
	} 
} 
 
void Search_name(Pointer Head)  //���������Һ��� 
{ 
	int flag=0;//��Ǳ����ĳ�ֵ 
	char name[10]; 
	Pointer p; 
	printf ("\n��������Ҫ��ѯ��������"); 
	scanf("%s",name); 
	printf("\n\t\t************* �����������ҵ���Ϣ ***************"); 
	p=Head; 
	while(p!=NULL) 
	{     
	  if(strcmp(p->name,name)==0)//���ҷ��ϵ�ͼ�� 
	  {   
	        printf("\n\t��¼�Ū�  %-10s",p->AN); 
	        printf("\n\t������    %-20s",p->name); 
	        printf("\n\t��������  %-20s",p->author); 
	        printf("\n\t����Ū�  %-10s",p->clc); 
	        printf("\n\t���浥λ��%-20s",p->company); 
	        printf("\n\t����ʱ�䪧%-20s",p->date); 
	        printf("\n\t�۸�    ��%-10s",p->price); 
	        flag=1;//�ҵ���Ǳ�����Ϊ1 
	   p=p->next;//ָ���ߵ���һ���ڵ� 
	} 
	    else 
		p=p->next; 
	} 
	if(flag==0) 
	printf("\n\t\tû����ͬ������¼"); 
	printf("\n\t\t�밴������������˵�"); 
	getchar(); 
} 
 
void Search_author(Pointer Head)  //�����������Һ��� 
{ 
	int flag=0; 
	char author[10]; 
	Pointer p; 
	printf ("\n��������Ҫ��ѯ����������"); 
	scanf("%s",author); 
	printf("\n\t\t************* �����������ҵ���Ϣ ***************"); 
	p=Head; 
	while(p!=NULL)//���ҷ��ϵ�ͼ�� 
	{    
	 if(strcmp(p->author,author)==0)/*�ҵ�ͼ����ʾ��Ϣ*/ 
	{       
	         printf("\n\t��¼�Ū�  %-10s",p->AN); 
	         printf("\n\t������    %-20s",p->name); 
	         printf("\n\t��������  %-20s",p->author); 
	         printf("\n\t����Ū�  %-10s",p->clc); 
	         printf("\n\t���浥λ��%-20s",p->company); 
	         printf("\n\t����ʱ�䪧%-20s",p->date); 
	         printf("\n\t�۸�    ��%-10s",p->price); 
	         flag=1; 
	   p=p->next; 
	} 
	     else 
	   p=p->next; 
	} 
	if(flag==0) 
	printf("\n\t\tû����ͬ��������¼"); 
	printf("\n\t\t�밴������������˵�"); 
	getch(); 
} 
 
void Listbyname(Pointer *Head)   //������������ 
{ 
	Pointer p,q; 
	int i,j; 
	char t[10]; 
	char c; 
	if(Head==NULL) 
	{ 
	printf("\n\t\tû���κ����Ϫ�\n"); 
	return; 
	} 
	if(num==0)//����Ƿ�������ݿɹ����� 
	{ 
	  printf("\n\t\tͼ����Ϣ��¼Ϊ�ժ����밴������������˵���"); 
	  getchar(); 
	  return; 
	}
	 
	p=q=*Head; 
	for(i=0;i<num;i++)//���� 
	{ 
	 for (j=i+1;j<num;j++) 
	 { 
	  q=p; 
	  p=p->next;//ʹָ��ָ����һ����� 
	  if(strcmp(q->name,p
	->name)>0)//�����������Ⱥ� 
	  {          //pָ���Ӧ����Ӧ����qָ���Ӧ���ݺ�p��q�������ݽ��� 
	  strcpy(t,p->AN); 
	  strcpy(p->AN,q->AN); 
	  strcpy(q->AN,t); 
	 
	  strcpy(t,p->author); 
	  strcpy(p->author,q->author); 
	  strcpy(q->author,t); 
	 
	  strcpy(t,p->clc); 
	  strcpy(p->clc,q->clc); 
	  strcpy(q->clc,t); 
	  strcpy(t,p->company); 
	  strcpy(p->company,q->company); 
	  strcpy(q->company,t); 
	 
	  strcpy(t,p->date); 
	  strcpy(p->date,q->date); 
	  strcpy(q->date,t); 
	 
	  strcpy(t,p->name); 
	  strcpy(p->name,q->name); 
	  strcpy(q->name,t); 
	 
	  strcpy(t,p->price); 
	  strcpy(p->price,q->price); 
	  strcpy(q->price,t); 
	 } 
	} 
	q=*Head;p=*Head;} 
	do 
	{ 
	printf("\n\t������ɪ��Ƿ���ʾ(Y/N)?��");    /*ѯ���Ƿ���ʾ������*/ 
	getchar(); 
	scanf("%c",&c); 
	if(c=='y'||c=='Y') 
	Scan(*Head);//��ʾ������ 
	else  
	{ 
	if(c=='n'||c=='N') 
	     return;//�������˵� 
	     else printf("\n\t\t�����������������!!!");//���������ѯ�� 
	} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
 void Delete(Pointer *Head)/*ɾ������*/ 
{
	int flag=1; 
	char AN[10]; 
	char c,z; 
	Pointer p,q; 
	printf("\n\t\t******************* ͼ��ɾ�� *******************\n"); 
	printf("\t������Ҫɾ��ͼ�����Ϣ�ĵ�¼�Ū�"); 
	scanf("%s",AN); 
	p=q=*Head;/*���ҷ���������ͼ��*/ 
	while(p!=NULL&&flag) 
	{ 
	 if(strcmp(p->AN,AN)==0)/*�ҵ���ͼ��*/ 
	    { 
	 printf("\t\n��¼�Ū�%-10s",p->AN);//��ʾ����Ҫɾ����ͼ�����Ϣ 
	 printf("\t\n������%-20s",p->name); 
	 printf("\t\n��������%-20s",p->author); 
	 printf("\t\n����Ū�%-10s",p->clc); 
	 printf("\t\n���浥λ��%-20s",p->company); 
	 printf("\t\n����ʱ�䪧%-20s",p->date); 
	 printf("\t\n�۸񪧪�%-10s\n",p->price); 
	 printf("ȷ��ɾ��?ȷ������Y��������ɾ��");//ѯ���Ƿ�ɾ�� 
	getchar(); 
	scanf("%c",&z); 
	 if(z=='Y'||z=='y') 
	 { if(p==*Head) 
	  	{*Head=p->next;free(p);}/*ɾ��ͼ����Ϣ*/ 
	   else 
	  	{q->next=p->next;free(p);} 
	  flag=0; 	
	  }
	  else  
	  {printf("ͼ����Ϣδɾ�����������˵���"); 
	   return; 
	  } 
	 } 
	 else 
	  {q=p;p=p->next;}/*ָ���ߵ���һ���ڵ�*/ 
	  printf("\t\tɾ���ɹ�������\n"); 
	} 
	if(flag) 
	printf("\tû���ҵ�����ɾ��������!!!");
	 
	do 
	{ 
		printf("ѡ���Ƿ����ɾ��(Y/N)?��");     /*����ɾ��ͼ����Ϣ*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Delete(Head);/*����ɾ��*/ 
		else  
		{ 
		   if(c=='n'||c=='N') 
		     return;/*��ɾ���������˵�*/ 
		     else 
		   printf("\n\t\t�����������������!!!"); 
		} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
void Update(Pointer Head)/*ͼ����Ϣ�޸ĺ���*/ 
{ 
	int flag=1; 
	char AN[10]; 
	char c; 
	Pointer p; 
	printf("\n\t\t***************** ͼ����Ϣ�޸� *****************\n"); 
	printf("\t������Ҫ�޸ĵ�ͼ��ĵ�¼�Ū�"); 
	scanf("%s",AN);/*���ҷ���������ͼ��*/ 
	p=Head; 
	while(p!=NULL&&flag) 
	{ 
	if(strcmp(p->AN,AN)==0) 
	  {   
	    printf("\n\t\t�������¼��:");/*�޸�ͼ����Ϣ*/ 
	    scanf("%s",p->AN); 
	    printf("\n\t\t��������:");  
	    scanf("%s",p->name); 
	    getchar(); 
	    printf("\n\t\t����������:"); 
	    scanf("%s",p->author); 
	    getchar(); 
	    printf("\n\t\t��������:"); 
	    scanf("%s",p->clc) ; 
	    getchar(); 
		printf("\n\t\t������浥λ:"); 
	    scanf("%s",p->company) ; 
	    getchar(); 
	    printf("\n\t\t�����������:"); 
	    gets(p->date); 
	    printf("\n\t\t����۸�:"); 
	    scanf("%s",p->price);  
	 flag=0; 
	 printf("�޸ĳɹ�!!\n"); 
	  } 
	else  
	   p=p->next;/*ָ���ߵ���һ���ڵ�*/ 
	} 
	
	if(flag) 
	printf("\n\t\tû�и�ͼ���¼!!!"); 
	do 
	{ 
		printf("ѡ���Ƿ�����޸�(Y/N)?��");     /*�����޸�ͼ����Ϣ*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Update(Head);/*�����޸�*/ 
		else  
		{if(c=='n'||c=='N') 
		     return;//���޸Ī����ز˵� 
		     else 
		   printf("\n\t\t�����������������!!!"); 
		} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N');//������������ѯ�� 
} 
 
void Save()             /*���ı��ļ���ʽ����ĺ���*/ 
{
	Pointer p; 
	p=Head; 
	char file[20];    /*��������ļ�����·���Լ��ļ���*/ 
	printf("�������ļ�·�����ļ���:"); 
	scanf("%s",file); 
	if((fp=fopen(file,"w+"))==NULL)/*�ж��ܷ���ļ�*/
	{ 
	printf("���ܴ��ļ�!\n"); 
	return; 
	} 
	
	while(p!=NULL) 
	{ 
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",p->AN,p->name,p->author,p->
		clc,p->company,p->date,p->price);//������д���ļ� 
		p=p->next;/*����һ�����*/ 
	} 
	fclose(fp);//д����ɪ��ر��ļ� 
	printf("�ļ��Ѿ�����!\n"); 
	return ; 
} 
 
void Read()/*�����ı��ļ��ĺ���*/ 
{
	Pointer p,q; 
	int m=0; 
	char file[20]; 
	printf("�������ļ�·�����ļ���:"); 
	scanf("%s",file);/*�����ļ�·��������*/ 
	if((fp=fopen(file,"r+"))==NULL)//����ļ��Ƿ���� 
	{ 
	printf("���ܴ��ļ�!\n"); 
	return; 
	} 
	m=m+1; 
	if(m==1) 
	{ 
	p=(Pointer)malloc(sizeof(Booklist));/*����һ���µ�Ԫ*/ 
	Head=p;//��p�ĵ�ַ����ͷָ��Head 
	fscanf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",&p->AN,&p->name,&p->author
	,&p->clc,&p->company,&p->date,&p->price);/*�ļ�����*/ 
	do 
	{num=num+1;//��¼�鼮��Ϣ�� 
	if(num==1) //��������ͷ���м�Ĵ����� 
	Head->next=p; 
	else q
	->next=p; 
	q=p; 
	p=(Pointer)malloc(sizeof(Booklist)); /*����һ���µ�Ԫ*/ 
	fscanf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",&p->AN,&p->name,&p->author
	,&p->clc,&p->company,&p->date,&p->price);//�����ļ����� 
	}while(!feof(fp));//����ļ��Ƿ������������ֹͣ���몦����������� 
	q->next=p; 
	p->next=NULL;//�����β���� 
	num=num+1;//��ȷ��ͼ����Ϣ�� 
	} 
	printf("д�����ݳɹ����ɷ����������Ϣ��"); 
	fclose(fp);/*�������몦�ر��ļ�*/ 
	return; 
} 

void Exit()/*�˳�����ĺ���*/ 
{
	char c;  
	do 
	{
		printf("\n\t\t�˳���......�Ƿ񱣴浽�ļ�(Y/N)?"); /*ѯ���Ƿ񱣴�ͼ��
		��Ϣ����ֹ��ʧ*/ 
		getchar(); 
		scanf("%c",&c);
		 
		if(c=='y'||c=='Y') 
			{Save();exit(0); } 
		else  
			{
			if(c=='n'||c=='N') 
				{exit(0); } 
			else 
				printf("\n\t\t�����������������!!!"); 
			} 
	} while(c!='y'&&c!='n'&&c!='Y'&&c!='N');//���������ѯ�� 
}

