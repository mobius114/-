#include<stdio.h>
#include"struct stu.h"

void low(struct stu *head)
{
    struct stu *p;
    p=head;
    int low=100,b;
    printf("课程序号：");
    scanf("%d",&b);
    while(p!=NULL)
    {
        if(p->score[b-1]<low)
        {
            low=p->score[b-1];
        }
        p=p->next;
    }
    p=head;
    while(p!=NULL)
    {
        if(p->score[b-1]==low)
        {
            printf("%d  %s  %d\n",p->num,p->name,p->score[b-1]);
        }
        p=p->next;
    }

}
