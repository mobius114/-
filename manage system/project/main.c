#include <stdio.h>
#include <stdlib.h>
#include"menu.c"
#include"search.c"
#include"count.c"
#include"cal.c"
#include"hig.c"
#include"low.c"
#include"ave.c"
#include"clahig.c"
#include"clalow.c"
#include"claave.c"
#include"takein.c"
#include"cresort.h"
#include"sort.h"
#include"struct stu.h"

void menu();
struct stu *takein();
void search(struct stu *head);
void sort(struct stu *head);
void count(struct stu *head);
void cal(struct stu *head);
void cresort(struct stu *head);
void hig(struct stu *head);
void low(struct stu *head);
void ave(struct stu *head);
void clahig(struct stu *head);//
void clalow(struct stu *head);//
void claave(struct stu *head);


int main()
{
    struct stu *head;
    int a,b;
    menu();
    scanf("%d",&a);
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        head=takein();
    }

    do
    {
        menu();
        printf("next:");
        scanf("%d",&b);
        switch(b)
        {
        case 0:
            return 0;
        case 2:
            search(head);
            break;
        case 3:
            sort(head);
            break;
        case 4:
            count(head);
            break;
        case 5:
            cal(head);
            break;
        case 6:
            cresort(head);
            break;
        case 7:
            hig(head);
            break;
        case 8:
            low(head);
            break;
        case 9:
            ave(head);
            break;
        case 10:
            clahig(head);
            break;
        case 11:
            clalow(head);
            break;
        case 12:
            claave(head);
            break;
        default:
            break;

        }
        printf("\n");
    }
    while(b!=0);
    return 0;
}
