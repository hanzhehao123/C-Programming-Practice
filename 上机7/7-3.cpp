//替换字符函数 
#include<stdio.h>

int substitute(char f, char s, char *str)
{
    int t = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == f){
            str[i] = s;
            t++;
        }
    }
    return t;
}
 
int main()
{
    char f, s,str[11];
    printf("请输入一串字符(长度小于10)\n");
    gets(str);
    printf("请输入要替换的字符，如：a,b\n");
    scanf("%c,%c",&f,&s);
    
    int t = substitute(f, s, str);
    printf("结果为：%s\n", str);
    printf("替换次数：%d",t);
}
