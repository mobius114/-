#include<stdio.h>
#include<stdlib.h>
#include"struct stu.h"
#include"cresort.h"

void cresort(struct stu *head)
{
    int cmp1(const void *a,const void *b);
    struct stu* listToArray1(struct stu* head, int* size);
    struct stu* arrayToList1(struct stu* array, int size);
    void printList1(struct stu* head);

    int size;
    struct stu* array = listToArray(head, &size);
    qsort(array, size, sizeof(struct stu), cmp1);
    head = arrayToList1(array, size);
    printList1(head);
}

int cmp1(const void *a,const void *b)
{
    float result1=0,result2=0;
    for(int i=0; i<10; i++)
    {
        if(((struct stu *)a)->credict[i]>50)
                {
                    result1+=(((struct stu *)a)->credict[i])/10*(((struct stu *)a)->score[i]-50);
                }
                if(((struct stu *)b)->credict[i]>50)
                {
                    result2+=(((struct stu *)b)->credict[i])/10*(((struct stu *)b)->score[i]-50);
                }
    }
    return (result2-result1)>0?1:-1;
}

struct stu* listToArray1(struct stu* head, int* size)
{
    int count = 0;
    struct stu* current = head;

    // 计算链表长度
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    // 分配数组空间
    struct stu* array = (struct stu*)malloc(count * sizeof(struct stu));
    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // 将链表数据复制到数组中
    current = head;
    for (int i = 0; i < count; i++)
    {
        array[i] = *current;
        current = current->next;
    }

    *size = count;
    return array;
}
struct stu* arrayToList1(struct stu* array, int size)
{
    struct stu* head = NULL;
    struct stu* current = NULL;

    // 遍历数组，创建新的链表
    for (int i = 0; i < size; i++)
    {
        struct stu* newNode = (struct stu*)malloc(sizeof(struct stu));
        if (newNode == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

        *newNode = array[i];
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            current = head;
        }
        else
        {
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}
void printList1(struct stu* head)
{
    struct stu* current = head;

    while (current != NULL)
    {
        printf("num: %d    name: %s    Class: %s\n", current->num, current->name, current->Class);
        current = current->next;
    }

    printf("\n");
}
