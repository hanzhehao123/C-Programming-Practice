//�滻�ַ����� 
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
    printf("������һ���ַ�(����С��10)\n");
    gets(str);
    printf("������Ҫ�滻���ַ����磺a,b\n");
    scanf("%c,%c",&f,&s);
    
    int t = substitute(f, s, str);
    printf("���Ϊ��%s\n", str);
    printf("�滻������%d",t);
}
