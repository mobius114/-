#include<stdio.h>
#include<string.h>
#include"struct stu.h"

void claave(struct stu *head)
{
    struct stu *p;
    p=head;
    int b,count=0;
    float ave=0;
    char a[50];
    printf("班级：");
    scanf("%s",a);
    printf("课程序号：");
    scanf("%d",&b);
    while(p!=NULL)
    {
        if(strcmp(p->Class, a) == 0)
        {
            ave+=p->score[b-1];
            count++;
        }
        p=p->next;
    }
    p=head;
    ave/=count;
    printf("%.1f",ave);
}

