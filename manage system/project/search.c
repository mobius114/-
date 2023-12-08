#include<stdio.h>
#include<string.h>
#include"struct stu.h"

void search(struct stu *head)
{
    struct stu *p;
    p=head;
    int a;
    printf("请输入学生学号:");
    scanf("%d",&a);
    int i=0;
    while(p!=NULL)
    {
        if(p->num==a)
        {
            printf("成绩为：");
            for (int i = 0; i < 10; i++)
            {
                printf("%d ", p->score[i]);
            }
            printf("\n");
            break;
        }
        else
        {
            p=p->next;
        }

    }



}
