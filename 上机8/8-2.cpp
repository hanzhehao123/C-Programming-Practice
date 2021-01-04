/*请编写一个程序实现：输入3 个整数，不改变3 个整数变量的内容，按照从小到大
的顺序输出者3 个整数。*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,x;
    int *pa,*pb,*pc;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("请输入3个整数:\n");
    scanf("%d,%d,%d",pa,pb,pc);
    
    if(*pa>*pb)
    {
        x=*pa;
        *pa=*pb;
        *pb=x;
    }
    
    if(*pa>*pc)
    {
        x=*pa;
        *pa=*pc;
        *pc=x;
    }
    
    if(*pb>*pc)
   {
        x=*pb;
        *pb=*pc;
        *pc=x;
   }
    printf("从小到大排列为:\n");
    printf("%d,%d,%d",*pa,*pb,*pc);
}
