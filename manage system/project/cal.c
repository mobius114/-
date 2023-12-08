#include<stdio.h>
#include"struct stu.h"

void cal(struct stu *head)
{
    struct stu *p;
    p=head;
    int stunum;
    float result=0,sum=0;
    printf("请输入学生学号:");
    scanf("%d",&stunum);
    while(p!=NULL)
    {
        if(p->num==stunum)
        {
            for(int i=0; i<10; i++)
            {
                if(p->score[i]>50)
                {
                result+=p->credict[i]*(p->score[i]-50)/10;
                }
                sum+=p->credict[i];
            }
            result/=sum;
            printf("绩点为：%.1f",result);
            break;
        }
        else
        {
            p=p->next;
        }
    }
}
