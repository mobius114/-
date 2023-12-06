#include<stdio.h>
#include"struct stu.h"

struct stu *takein()
{
    struct stu *head = NULL, *tail = NULL, *p = NULL;

    int numStudents;
    printf("学生人数:");
    scanf("%d", &numStudents);
    getchar();

    for (int i = 0; i < numStudents; i++)
    {
        p = (struct stu*)malloc(sizeof(struct stu));

        printf("第%d个学生:\n", i + 1);
        printf("Number: ");
        scanf("%d", &p->num);
        getchar();

        printf("Name: ");
        fgets(p->name, sizeof(p->name), stdin);
        p->name[strcspn(p->name, "\n")] = '\0';

        printf("Class: ");
        fgets(p->Class, sizeof(p->Class), stdin);
        p->Class[strcspn(p->Class, "\n")] = '\0';

        printf("Score: ");
        fgets(p->score, sizeof(p->score), stdin);
        p->score[strcspn(p->score, "\n")] = '\0';

        printf("Credit: ");
        fgets(p->credict, sizeof(p->credict), stdin);
        p->credict[strcspn(p->credict, "\n")] = '\0';

        p->next = NULL;

        if (head == NULL)
        {
            head = p;
            tail = p;
        }
        else
        {
            tail->next = p;
            tail = p;
        }
    }

    return head;
}
