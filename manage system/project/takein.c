#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct stu.h"

struct stu *takein()
{
    struct stu *head = NULL, *tail = NULL, *p = NULL;

    int numStudents;
    printf("学生人数:");
    scanf("%d", &numStudents);
    getchar();

    for (int i = 0; i < numStudents; i++)
    {
        p = (struct stu *)malloc(sizeof(struct stu));

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
        for(int i=0;i<10;i++)
        {
            scanf("%d", &p->score[i]);
        }
        getchar();

        printf("Credit: ");
        for(int i=0;i<10;i++)
        {
        scanf("%f", &p->credict[i]);
        }
        getchar();

        p->next = NULL;
        printf("\n");

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
