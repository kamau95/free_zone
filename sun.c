#include <stdio.h>
#include <string.h>

struct list
{
    int grade;
    char name[ 12];
    float studentMarks;
};


int main( void)
{
    //my struct variable as a local var
    struct list parents;
    struct list *p = &parents;
    //update variable using pointer
    p->grade =6;
    strcpy(p->name, "james");
    p->studentMarks = 90.5;
    printf("grade %d\n name %s\n studentmarks %f", p->grade, p->name, p->studentMarks);
    return (0);
}