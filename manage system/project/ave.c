#include<stdio.h>
#include"struct stu.h"

void ave(struct stu *head)
{
    struct stu *p;
    p=head;
    float ave=0;
    int count=0,b;
    printf("课程序号：");
    scanf("%d",&b);
    while(p!=NULL)
    {
        ave+=p->score[b-1];
        count++;
        p=p->next;
    }
    p=head;
    printf("%.1f\n",ave/count);
}
