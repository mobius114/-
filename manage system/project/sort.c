#include<stdio.h>
#include<stdlib.h>
#include"struct stu.h"
#include"sort.h"

void sort(struct stu *head)
{
    int cmp(const void *a,const void *b);
    struct stu* listToArray(struct stu* head, int* size);
    struct stu* arrayToList(struct stu* array, int size);
    void printList(struct stu* head);

    int size;
    struct stu* array = listToArray(head, &size);
    qsort(array, size, sizeof(struct stu), cmp);
    head = arrayToList(array, size);
    printList(head);
}

int cmp(const void *a,const void *b)
{
    int sum1=0,sum2=0;
    for(int i=0; i<10; i++)
    {
        sum1+=((struct stu *)a)->score[i];
        sum2+=((struct stu *)b)->score[i];
    }
    return sum2-sum1;
}

struct stu* listToArray(struct stu* head, int* size)
{
    int count = 0;
    struct stu* current = head;

    // ����������
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    // ��������ռ�
    struct stu* array = (struct stu*)malloc(count * sizeof(struct stu));
    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // ���������ݸ��Ƶ�������
    current = head;
    for (int i = 0; i < count; i++)
    {
        array[i] = *current;
        current = current->next;
    }

    *size = count;
    return array;
}
struct stu* arrayToList(struct stu* array, int size)
{
    struct stu* head = NULL;
    struct stu* current = NULL;

    // �������飬�����µ�����
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
void printList(struct stu* head)
{
    struct stu* current = head;

    while (current != NULL)
    {
        printf("num: %d    name: %s    Class: %s\n", current->num, current->name, current->Class);
        current = current->next;
    }

    printf("\n");
}
