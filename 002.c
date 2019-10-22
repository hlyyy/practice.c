#include<stdio.h>
int main(void)
{
	int x,y,a;
   	printf("请输入两门课的成绩:");
   	scanf("%d%d",&x,&y);
   	if (x<0||x>100||y<0||y>100)
		puts("it is error");
	if (x<60 || y<60) a=0;
    else a=1;
	switch (a) {
		case 0 : printf("it is not pass\n"); break;
        case 1 : printf("it is pass\n");     break;
    }
 	return 0;
}

