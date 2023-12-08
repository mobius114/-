#include<stdio.h>
#include"struct stu.h"

void hig(struct stu *head)
{
    struct stu *p;
    p=head;
    int hig=0,b;
    printf("课程序号：");
    scanf("%d",&b);
    while(p!=NULL)
    {
            if(p->score[b-1]>hig)
            {
                hig=p->score[b-1];
            }
        p=p->next;
    }
    p=head;
        while(p!=NULL)
        {
            if(p->score[b-1]==hig)
            {
                printf("%d  %s  %d\n",p->num,p->name,p->score[b-1]);
            }
            p=p->next;
        }

}
