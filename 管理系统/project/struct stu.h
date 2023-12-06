#ifndef STRUCT_STU_H_INCLUDED
#define STRUCT_STU_H_INCLUDED

struct stu
{
    int num;
    char name[50];
    char Class[20];
    int score[10];
    float credict[10];
    struct stu *next;
};


#endif // STRUCT_STU_H_INCLUDED
