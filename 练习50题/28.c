#include <stdio.h>
#include <string.h>
#define MAX 100

void GetPassage(char str[]);
void beep();
void Sepra(char s[], char w[50][20], char time[]);
void SortWord(char word[][20]);

int main()
{
    char s[MAX];
    char word[50][20], time[50];
    int i, j;

    printf("输入一段英文：\n");
    GetPassage(s);
    printf("\n");
    Sepra(s, word, time);

    for (i = 0; i < 50; i++) //数组time的建立是便于数据的转移
        word[i][0] = time[i];
    SortWord(word);

    for (i = 0; i < 100; i++)
    {
        if (word[i][0] != '0')
        {
            for (j = 1; j < 20; j++)
            {
                if (word[i][j] != ' ')
                    printf("%-c", word[i][j]);
            }
            printf("(%c) ", word[i][0]);
            if (i % 4 == 3)
                printf("\n");
        }
    }
    return 0;
}

void GetPassage(char str[])
{
    int i = 0;
    char ch;

    while (1)
    {
        ch = getchar();
        if (ch == '\r')
            break;
        if (ch == '\b')
        {
            if (i > 0)
            {
                printf("%c %c", ch, ch);
                i--;
            }
            else
                beep();
            continue;
        }
        if (ch == ' ' || ch == ',' || ch == '.' || (ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
        {
            printf("%c", ch);
            str[i++] = ch;
        }
        else
            beep();
    }
    str[i] = '\0';
}

void beep()
{
    printf("\07");
}

void Sepra(char s[], char w[50][20], char time[]) //该函数用来将字符数组s中的标点去掉，分离出单词，存放在二维数组w中，数组time与w有联系，用来存放单词出现次数
{
    int i, j, m, n, p, q, sum, flag, mark[MAX] = {0};
    for (i = 0; i < MAX; i++) //初始时mark值为0，当输入的为字母时，mark为1，否则为零
    {
        if (s[i] > 64 && s[i] < 91)
            s[i] = s[i] + 'a' - 'A';
        if (s[i] > 96 && s[i] < 123)
            mark[i + 1] = 1;
        else
            mark[i + 1] = 0;
    }
    mark[0] = 0;

    for (i = 0, j = 0, m = 1; i < MAX && j < 50 && m < 20; i++) //mark[i]表示第i+1个字符前面是否为字母；mark[i+1]表示第i+1个字符是否为字母
    {
        if (mark[i] == 0 && mark[i + 1] == 1) //大写字母转换为小写，再进行后续判断
            w[j][m++] = s[i];
        if (mark[i] == 1 && mark[i + 1] == 1)
            w[j][m++] = s[i];
        if (mark[i] == 1 && mark[i + 1] == 0)
        {
            w[j][m++] = '\0'; //如果第i+1个字符不是字母，且它前面一个是字母，则结束这一个单词，准备开始接受下一个单词 ，并将m重新设置为1
            m = 1;
            time[j] = '1';
            ++j;
        }
        for (n = 0; n < j - 1; n++) //比较新接受的单词是否与前面相同
        {
            for (q = 1, sum = 0; q < 20; q++)
            {
                flag = 1;
                if (w[n][q] == w[j - 1][q])
                    flag = 0;
                sum += flag;
            }
            if (sum == 0) //如果新接受的单词与前面相同，则删除新接受的单词，并重新接受可能是新单词的单词
            {
                --j;
                time[n] = time[n] + 1;
                time[j] = '0';
                for (p = 0; p < 20; p++)
                    w[j][p] = ' ';
            }
        }
    }
}

void SortWord(char word[][20])
{
    int i, j, n;
    char temp[20], c;
    for (i = 0; i < 50; i++) //排序部分  选择排序法
    {
        c = word[i][0]; //c为单词出现次数最大值
        for (j = i + 1; j < 50; j++)
        {
            if (c < word[j][0])
                c = word[j][0];
            if (c != word[i][0]) //交换
            {
                for (n = 0; n < 20; n++)
                    temp[n] = word[i][n];
                for (n = 0; n < 20; n++)
                    word[i][n] = word[j][n];
                for (n = 0; n < 20; n++)
                    word[j][n] = temp[n];
            }
        }
    }
}