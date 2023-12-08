#include<stdio.h>
#include<string.h>
#include"struct stu.h"

void clalow(struct stu *head)
{
    struct stu *p;
    p=head;
    int b,low=100;
    char a[50];
    printf("班级：");
    scanf("%s",a);
    printf("课程序号：");
    scanf("%d",&b);
    while(p!=NULL)
    {
        if(strcmp(p->Class, a) == 0)
        {
                if(p->score[b-1]<low)
            {
                low=p->score[b-1];
            }
        }
        p=p->next;
    }
    p=head;
    while(p!=NULL)
    {
        if((strcmp(p->Class, a) == 0)&&(p->score[b-1]==low))
        {
            printf("%d  %s  %d\n",p->num,p->name,p->score[b-1]);
        }
        p=p->next;
    }
}

