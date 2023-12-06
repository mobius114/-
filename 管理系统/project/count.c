#include<stdio.h>
#include"struct stu.h"

void count(struct stu *head)
{
    struct stu *p;
    p=head;
    int a[10]= {0},b[10]= {0},c[10]= {0},d[10]= {0},e[10]= {0};
    while(p!=NULL)
    {
        for(int i=0; i<10; i++)
        {
            if(p->score[i]>=90)
                {a[i]++;}
            else if(p->score[i]>=80)
                {b[i]++;}
            else if(p->score[i]>=70)
                {c[i]++;}
            else if(p->score[i]>=60)
                {d[i]++;}
            else
                {e[i]++;}
        }
        p=p->next;
    }
    for(int i=0;i<10;i++)
    {
        printf("            %d\n",i+1);
        printf("A:%d  B:%d  C:%d  D:%d  E:%d\n",a[i],b[i],c[i],d[i],e[i]);
    }
}
