#include<stdio.h>
#include<string.h>

struct person
{
    char name[20];
    int count;
} leader[3] = {"li", 0, "zhang", 0, "huang", 0};

int main()
{
    char leader_name[20];

    while (1)
    {
        scanf("%s", leader_name);
        if (strcmp(leader_name, "0") == 0)
            break;
        
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(leader_name, leader[i].name) == 0)
                leader[i].count++;
        }
    }

    for (int i = 0; i < 3; i++)
        printf("name:%s count:%d\n", leader[i].name, leader[i].count);

    return 0;
}