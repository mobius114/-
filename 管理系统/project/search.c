#include<stdio.h>
#include"struct stu.h"

void search(struct stu *head)
{
    struct stu *p;
    p=head;
    int a;
    printf("请输入学生学号:");
    scanf("%d",&a);

        while(p!=NULL)
        {
            if(p->num==a)
            {
                printf("成绩为：%s",p->score);
                break;
            }
            else
            {
                p=p->next;
            }

        }



}
