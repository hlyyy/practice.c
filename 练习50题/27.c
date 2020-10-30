#include <stdio.h>
#include <string.h>

#define MAX 100
void Getsen(char s[]);                             //接受输入句子的函数
void Sepra(char s[], char w[50][20], char time[]); //分离单词并计数的函数
void sort(char w[50][20]);                         //对计数后排序并输出的函数

int main()
{
    char sen[MAX];
    char word[50][20], time[50];
    int i;

    memset(time, '0', 50);   //初始化赋值 全为字符零
    memset(word, ' ', 1000); //初始化赋值 全为空格
    Getsen(sen);
    Sepra(sen, word, time);

    for (i = 0; i < 50; i++) //数组time的建立是便于数据的转移
        word[i][0] = time[i];

    sort(word);
    return 0;
}

void Getsen(char s[]) //该函数接受输入语句中的字符
{
    printf("please input the sentence :(非英文将会自动除去)\n");
    gets(s);
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

void sort(char w[50][20])
{
    int i, j, n;
    char temp[20], c;
    for (i = 0; i < 50; i++) //排序部分  选择排序法
    {
        c = w[i][0]; //c为单词出现次数最大值
        for (j = i + 1; j < 50; j++)
        {
            if (c < w[j][0])
                c = w[j][0];
            if (c != w[i][0]) //交换
            {
                for (n = 0; n < 20; n++)
                    temp[n] = w[i][n];
                for (n = 0; n < 20; n++)
                    w[i][n] = w[j][n];
                for (n = 0; n < 20; n++)
                    w[j][n] = temp[n];
            }
        }
    }
    for (i = 0; i < 50; i++) //输出部分
    {
        if (w[i][0] != '0')
        {
            for (j = 1; j < 20; j++)
            {
                if (w[i][j] != ' ')
                    printf("%-c", w[i][j]);
            }
            printf("(%c) ", w[i][0]);
            if (i % 4 == 3)
                printf("\n");
        }
    }
}