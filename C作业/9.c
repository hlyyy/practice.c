#include <stdio.h>
#include <string.h>
//#include <conio.h>
#define M 80

char *Getstring(char *str, int start, int length);  //取子字符串函数
char *Insstring(char *sstr, char *gstr, int start); //字符串插入函数
char *Delstrting(char *str, int start, int length); //字符串删除函数

int main()
{
    int ope, len, start;
    char str[M], sstr[M], gstr[M];

    printf("请输入字符串：\n");
    gets(str);
    len = strlen(str);
    printf("操作提示：\n 输入数字0--取字串操作\n 输入数字1--插入操作\n 输入数字2 --删除操作\n");
    scanf("%d", &ope);

    
    //执行取字串操作
    if (ope == 0)
    {
        fflush(stdin); //删除键盘缓存区
        printf("请输入需要取的字符串的长度：\n");
        scanf("%d", &len);
        printf("请输入取字符串的起始位置 ：\n");
        scanf("%d", &start);
        Getstring(str, start, len);
        printf("%s", Getstring(str, start, len));
    }
    //执行插入字符串操作
    else if (ope == 1)
    {
        fflush(stdin); //删除键盘缓存区
        printf("请输入源字符串：\n");
        gets(sstr);
        printf("请输入目标字符串：\n");
        gets(gstr);
        printf("请输入插入字符串的起始位置 ：\n");
        scanf("%d", &start);
        Insstring(sstr, gstr, start);
        printf("%s", Insstring(sstr, gstr, start));
    }

    //执行删除字符串操作
    else if (ope == 2)
    {
        fflush(stdin); //删除键盘缓存区
        printf("请输入需要删除的字符串的长度：\n");
        scanf("%d", &len);
        printf("请输入待删除部分字符串的起始位置 ：\n");
        scanf("%d", &start);
        printf("%s", Delstrting(str, start, len));
    }
    //执行不在提示内的操作，错误！
    else
        printf("error!");
    printf("\n");
    return 0;
}

//取子字符串函数
char *Getstring(char *str, int start, int length)
{
    static char resstr[M];
    int n;
    if (start < 0 || start >= strlen(str) || length < 0)
        return (NULL);
    for (n = 0; n < length && str[start + n] != '\0'; n++)
        resstr[n] = str[start + n - 1];
    resstr[strlen(str)] = '\0';
    return (resstr);
}
//字符串插入函数
char *Insstring(char *sstr, char *gstr, int start)
{
    static char resstr[M];
    int n;
    if (start < 0 || start >= strlen(gstr))
        return (NULL);
    for (n = 0; n < start; n++)
        resstr[n] = gstr[n];
    for (n = start; n < (start + strlen(sstr)); n++)
        resstr[n] = sstr[n - start];
    for (n = start + strlen(sstr); n < (strlen(gstr) + strlen(sstr)); n++)
        resstr[n] = gstr[n - strlen(sstr)];
    return (resstr);
}
//字符串删除函数
char *Delstrting(char *str, int start, int length)
{
    static char resstr[M];
    int n;
    if (start < 0 || start >= strlen(str) || length < 0)
        return (NULL);
    for (n = 0; n < start - 1; n++)
        resstr[n] = str[n];
    for (n = start - 1; n < strlen(str) - length; n++)
        resstr[n] = str[n + length];
    resstr[strlen(str) - length] = '\0';
    return (resstr);
}
