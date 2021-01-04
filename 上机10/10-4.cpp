#include<iostream> /*引用库函数*/  
#include<stdio.h> 
#include<string.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<windows.h> 
 
typedef struct book_info//定义图书信息的结构体变量并声明新的类型名 
{ 
	 char AN[10];            /*登录号*/ 
	 char name[20];          /*书名*/ 
	 char author[20];        /*作者名*/ 
	 char clc[10];           /*分类名*/ 
	 char company[20];       /*出版单位*/ 
	 char date[20];          /*出版日期*/ 
	 char price[10];         /*价格*/ 
	 struct book_info *next; 
 }Booklist,*Pointer; 
 
int num=0;//全局变量的定义 
Pointer Head=NULL;//头指针为空 
FILE *fp;//指向文件的指针 
 
                  /*声明函数*/ 
int menu_select();/*主菜单函数*/ 
void Insert(Pointer * Head);/*录入函数*/ 
void Scan(Pointer Head);/*显示函数*/ 
void Search_name(Pointer Head);/*按书名查找函数*/ 
void Search_author(Pointer Head);/*按作者名查找函数*/ 
void Listbyname(Pointer *Head);/*按书名排序函数*/ 
void Delete(Pointer * Head);//删除函数 
void Update(Pointer Head);//修改函数 
void Save();//用文本文件形式保存函数 
void Read();//读入文本文件函数 
void Exit();//退出函数 
 
int main(void)//主函数
{ 
	system("cls");/*运行前清屏*/ 
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
 
int menu_select()//主菜单函数 
{ 
  int a; 
  printf("\n\t\t\t欢迎使用图书信息管理系统\n\n\n\n\n\t\t  ***** 请按任意键进入系统菜单! ***** \n"); 
  getch(); 
  system("cls"); 
  printf("\t\t********************MENU*********************\n");//主菜单 
  printf("\t\t    1. 录入图书信息\n"); 
  printf("\t\t    2. 浏览图书信息\n"); 
  printf("\t\t    3. 按书名查询图书信息\n"); 
  printf("\t\t    4. 按作者名查询图书信息\n"); 
  printf("\t\t    5. 图书信息排序\n"); 
  printf("\t\t    6. 删除图书信息\n"); 
  printf("\t\t    7. 修改图书信息\n"); 
  printf("\t\t    8. 图书数据保存\n"); 
  printf("\t\t    9. 图书信息文件打开\n"); 
  printf("\t\t    0. 退出\n"); 
  printf("\t\t***********************************************\n"); 
  do 
  { 
	printf("\n\t请选择您所需要的服务"); 
	scanf("%d",&a); 
  } 
  while (a<0||a>9); 
  return a; 
} 
 
void Insert(Pointer * Head)  //录入图书信息函数 
{ 
	char AN[10] ; 
	char c; 
	Pointer p,q,r; 
	
	printf("\n\t\t**************** 请输入图书信息 ****************\n");/*
	交互输入*/  
	printf("\n\t\t请输入登录号:"); 
	scanf("%s",AN); 
	p=q=*Head;//检测登录号是否重复
	while(p!=NULL) 
	{ 
	if(strcmp(p->AN,AN)==0) 
	 { 
	  printf ("已经有相同的登录号");return;} 
	    else 
	    {q=p;p=p->next;} 
	} 
	r=(Pointer)malloc(sizeof(Booklist)); 
	r->next=NULL; 
	if(r==NULL) 
	{printf("分配空间失败!");return;} 
	
	if(q==NULL) 
	* Head=r; 
	else 
	{q->next=r;} 
	 
	strcpy(r->AN,AN); 
	 printf("\n\t\t输入书名:"); //录入图书信息 
	 scanf("%s",r->name); 
	 getchar(); 
	 printf("\n\t\t输入作者名:"); 
	 scanf("%s",r->author); 
	 getchar(); 
	 printf("\n\t\t输入分类号:"); 
	 scanf("%s",r->clc) ; 
	 getchar(); 
	 printf("\n\t\t输入出版单位:"); 
	 scanf("%s",r->company) ; 
	 getchar(); 
	 printf("\n\t\t输入出版日期:"); 
	 gets(r->date) ; 
	 printf("\n\t\t输入价格:"); 
	 scanf("%s",r->price);  
	 do 
	{ 
		printf("\n\t\t录入成功!!!!"); 
		num++; 
		printf("选择是否继续录入(Y/N)?");     /*连续录入图书信息*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Insert(Head); 
		else  
		{ 
			if(c=='n'||c=='N') 
		     return; 
		     else 
		 
		  printf("\n\t\t输入错误请重新输入!!!"); 
		} 
	} while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
 
void Scan(Pointer Head)  //显示图书信息函数 
{ 
	Pointer p; 
	p=Head; 
	if(p==NULL) 
	printf("记录为空");//检测是否有图书信息 
	else 
	{ 
		printf("\n\t共有%d条记录",num); 
		while(p!=NULL) 
	{ 
		printf("\n\n\t\t登录号%-10s",p->AN);//显示图书信息 
		printf("\n\t\t书名    %-20s",p->name); 
		printf("\n\t\t作者名  %-20s",p->author); 
		printf("\n\t\t分类号  %-10s",p->clc); 
		printf("\n\t\t出版单位%-20s",p->company); 
		printf("\n\t\t出版时间%-20s",p->date); 
		printf("\n\t\t价格    %-10s",p->price); 
		p=p->next; 
	} 
		printf("\n\t\t请按任意键回到主菜单"); 
		return; 
	} 
} 
 
void Search_name(Pointer Head)  //按书名查找函数 
{ 
	int flag=0;//标记变量的初值 
	char name[10]; 
	Pointer p; 
	printf ("\n请输入需要查询的书名"); 
	scanf("%s",name); 
	printf("\n\t\t************* 以下是您查找的信息 ***************"); 
	p=Head; 
	while(p!=NULL) 
	{     
	  if(strcmp(p->name,name)==0)//查找符合的图书 
	  {   
	        printf("\n\t登录号  %-10s",p->AN); 
	        printf("\n\t书名    %-20s",p->name); 
	        printf("\n\t作者名  %-20s",p->author); 
	        printf("\n\t分类号  %-10s",p->clc); 
	        printf("\n\t出版单位%-20s",p->company); 
	        printf("\n\t出版时间%-20s",p->date); 
	        printf("\n\t价格    %-10s",p->price); 
	        flag=1;//找到标记变量设为1 
	   p=p->next;//指针走到下一个节点 
	} 
	    else 
		p=p->next; 
	} 
	if(flag==0) 
	printf("\n\t\t没有相同书名纪录"); 
	printf("\n\t\t请按任意键返回主菜单"); 
	getchar(); 
} 
 
void Search_author(Pointer Head)  //按作者名查找函数 
{ 
	int flag=0; 
	char author[10]; 
	Pointer p; 
	printf ("\n请输入需要查询的作者名"); 
	scanf("%s",author); 
	printf("\n\t\t************* 以下是您查找的信息 ***************"); 
	p=Head; 
	while(p!=NULL)//查找符合的图书 
	{    
	 if(strcmp(p->author,author)==0)/*找到图书显示信息*/ 
	{       
	         printf("\n\t登录号  %-10s",p->AN); 
	         printf("\n\t书名    %-20s",p->name); 
	         printf("\n\t作者名  %-20s",p->author); 
	         printf("\n\t分类号  %-10s",p->clc); 
	         printf("\n\t出版单位%-20s",p->company); 
	         printf("\n\t出版时间%-20s",p->date); 
	         printf("\n\t价格    %-10s",p->price); 
	         flag=1; 
	   p=p->next; 
	} 
	     else 
	   p=p->next; 
	} 
	if(flag==0) 
	printf("\n\t\t没有相同作者名纪录"); 
	printf("\n\t\t请按任意键返回主菜单"); 
	getch(); 
} 
 
void Listbyname(Pointer *Head)   //按书名排序函数 
{ 
	Pointer p,q; 
	int i,j; 
	char t[10]; 
	char c; 
	if(Head==NULL) 
	{ 
	printf("\n\t\t没有任何资料\n"); 
	return; 
	} 
	if(num==0)//检查是否存在数据可供排序 
	{ 
	  printf("\n\t\t图书信息记录为空请按任意键返回主菜单。"); 
	  getchar(); 
	  return; 
	}
	 
	p=q=*Head; 
	for(i=0;i<num;i++)//排序 
	{ 
	 for (j=i+1;j<num;j++) 
	 { 
	  q=p; 
	  p=p->next;//使指针指向下一个结点 
	  if(strcmp(q->name,p
	->name)>0)//检查二者排序先后 
	  {          //p指针对应数据应排于q指针对应数据后pq进行数据交换 
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
	printf("\n\t排序完成是否显示(Y/N)?");    /*询问是否显示排序结果*/ 
	getchar(); 
	scanf("%c",&c); 
	if(c=='y'||c=='Y') 
	Scan(*Head);//显示排序结果 
	else  
	{ 
	if(c=='n'||c=='N') 
	     return;//返回主菜单 
	     else printf("\n\t\t输入错误请重新输入!!!");//错误则继续询问 
	} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
 void Delete(Pointer *Head)/*删除函数*/ 
{
	int flag=1; 
	char AN[10]; 
	char c,z; 
	Pointer p,q; 
	printf("\n\t\t******************* 图书删除 *******************\n"); 
	printf("\t请输入要删除图书的信息的登录号"); 
	scanf("%s",AN); 
	p=q=*Head;/*查找符合条件的图书*/ 
	while(p!=NULL&&flag) 
	{ 
	 if(strcmp(p->AN,AN)==0)/*找到该图书*/ 
	    { 
	 printf("\t\n登录号%-10s",p->AN);//显示即将要删除的图书的信息 
	 printf("\t\n书名%-20s",p->name); 
	 printf("\t\n作者名%-20s",p->author); 
	 printf("\t\n分类号%-10s",p->clc); 
	 printf("\t\n出版单位%-20s",p->company); 
	 printf("\t\n出版时间%-20s",p->date); 
	 printf("\t\n价格%-10s\n",p->price); 
	 printf("确定删除?确定请输Y其它则不删除");//询问是否删除 
	getchar(); 
	scanf("%c",&z); 
	 if(z=='Y'||z=='y') 
	 { if(p==*Head) 
	  	{*Head=p->next;free(p);}/*删除图书信息*/ 
	   else 
	  	{q->next=p->next;free(p);} 
	  flag=0; 	
	  }
	  else  
	  {printf("图书信息未删除返回主菜单。"); 
	   return; 
	  } 
	 } 
	 else 
	  {q=p;p=p->next;}/*指针走到下一个节点*/ 
	  printf("\t\t删除成功\n"); 
	} 
	if(flag) 
	printf("\t没有找到可以删除的数据!!!");
	 
	do 
	{ 
		printf("选择是否继续删除(Y/N)?");     /*连续删除图书信息*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Delete(Head);/*继续删除*/ 
		else  
		{ 
		   if(c=='n'||c=='N') 
		     return;/*不删除返回主菜单*/ 
		     else 
		   printf("\n\t\t输入错误请重新输入!!!"); 
		} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N'); 
} 
 
void Update(Pointer Head)/*图书信息修改函数*/ 
{ 
	int flag=1; 
	char AN[10]; 
	char c; 
	Pointer p; 
	printf("\n\t\t***************** 图书信息修改 *****************\n"); 
	printf("\t请输入要修改的图书的登录号"); 
	scanf("%s",AN);/*查找符合条件的图书*/ 
	p=Head; 
	while(p!=NULL&&flag) 
	{ 
	if(strcmp(p->AN,AN)==0) 
	  {   
	    printf("\n\t\t请输入登录号:");/*修改图书信息*/ 
	    scanf("%s",p->AN); 
	    printf("\n\t\t输入书名:");  
	    scanf("%s",p->name); 
	    getchar(); 
	    printf("\n\t\t输入作者名:"); 
	    scanf("%s",p->author); 
	    getchar(); 
	    printf("\n\t\t输入分类号:"); 
	    scanf("%s",p->clc) ; 
	    getchar(); 
		printf("\n\t\t输入出版单位:"); 
	    scanf("%s",p->company) ; 
	    getchar(); 
	    printf("\n\t\t输入出版日期:"); 
	    gets(p->date); 
	    printf("\n\t\t输入价格:"); 
	    scanf("%s",p->price);  
	 flag=0; 
	 printf("修改成功!!\n"); 
	  } 
	else  
	   p=p->next;/*指针走到下一个节点*/ 
	} 
	
	if(flag) 
	printf("\n\t\t没有该图书记录!!!"); 
	do 
	{ 
		printf("选择是否继续修改(Y/N)?");     /*连续修改图书信息*/ 
		getchar(); 
		scanf("%c",&c); 
		if(c=='y'||c=='Y') 
		Update(Head);/*继续修改*/ 
		else  
		{if(c=='n'||c=='N') 
		     return;//不修改返回菜单 
		     else 
		   printf("\n\t\t输入错误请重新输入!!!"); 
		} 
	} 
	while(c!='y'&&c!='n'&&c!='Y'&&c!='N');//输入错误则继续询问 
} 
 
void Save()             /*以文本文件形式保存的函数*/ 
{
	Pointer p; 
	p=Head; 
	char file[20];    /*用来存放文件保存路径以及文件名*/ 
	printf("请输入文件路径及文件名:"); 
	scanf("%s",file); 
	if((fp=fopen(file,"w+"))==NULL)/*判断能否打开文件*/
	{ 
	printf("不能打开文件!\n"); 
	return; 
	} 
	
	while(p!=NULL) 
	{ 
		fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",p->AN,p->name,p->author,p->
		clc,p->company,p->date,p->price);//将数据写入文件 
		p=p->next;/*下移一个结点*/ 
	} 
	fclose(fp);//写入完成关闭文件 
	printf("文件已经保存!\n"); 
	return ; 
} 
 
void Read()/*读入文本文件的函数*/ 
{
	Pointer p,q; 
	int m=0; 
	char file[20]; 
	printf("请输入文件路径及文件名:"); 
	scanf("%s",file);/*输入文件路径及名称*/ 
	if((fp=fopen(file,"r+"))==NULL)//检查文件是否存在 
	{ 
	printf("不能打开文件!\n"); 
	return; 
	} 
	m=m+1; 
	if(m==1) 
	{ 
	p=(Pointer)malloc(sizeof(Booklist));/*开辟一个新单元*/ 
	Head=p;//将p的地址赋给头指针Head 
	fscanf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",&p->AN,&p->name,&p->author
	,&p->clc,&p->company,&p->date,&p->price);/*文件读入*/ 
	do 
	{num=num+1;//记录书籍信息量 
	if(num==1) //区别开链表开头与中间的处理方法 
	Head->next=p; 
	else q
	->next=p; 
	q=p; 
	p=(Pointer)malloc(sizeof(Booklist)); /*开辟一个新单元*/ 
	fscanf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n",&p->AN,&p->name,&p->author
	,&p->clc,&p->company,&p->date,&p->price);//读入文件数据 
	}while(!feof(fp));//检查文件是否结束若是则停止读入否则继续读入 
	q->next=p; 
	p->next=NULL;//链表结尾处理 
	num=num+1;//正确的图书信息量 
	} 
	printf("写入数据成功可返回浏览其信息。"); 
	fclose(fp);/*结束读入关闭文件*/ 
	return; 
} 

void Exit()/*退出程序的函数*/ 
{
	char c;  
	do 
	{
		printf("\n\t\t退出中......是否保存到文件(Y/N)?"); /*询问是否保存图书
		信息防止丢失*/ 
		getchar(); 
		scanf("%c",&c);
		 
		if(c=='y'||c=='Y') 
			{Save();exit(0); } 
		else  
			{
			if(c=='n'||c=='N') 
				{exit(0); } 
			else 
				printf("\n\t\t输入错误请重新输入!!!"); 
			} 
	} while(c!='y'&&c!='n'&&c!='Y'&&c!='N');//错误则继续询问 
}

