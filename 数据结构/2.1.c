#include <stdio.h>
#include <malloc.h>

const LIST_INIT_SIZE = 100;
const LISTINCREMENT = 10;

typedef struct
{
    int *elem;
    int length;
    int listsize;
    int incrementsize;     
}Sqlist;

void InitList_sq(Sqlist &L, int maxsize = LIST_INIT_SIZE, int incresize = LISTINCREMENT)
{
    L.elem = (int *)malloc(sizeof(int) * maxsize);
    L.length = 0;
    L.listsize = maxsize;
    L.incrementsize = incresize;
}

int main()
{

}
