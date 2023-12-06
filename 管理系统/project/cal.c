#include<stdio.h>
#include"struct stu.h"

void cal(struct stu *head)
{
    struct stu *p;
    p=head;
    int a;
    float result,sum=0;
    printf("请输入学生学号:");
    scanf("%d",&a);

    while(p!=NULL)
    {
        if(p->num==a)
        {
            for(int i=0; i<10; i++)
            {
                result+=(p->credict[i])*(p->score[i]);
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
