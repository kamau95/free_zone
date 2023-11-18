#include <stdio.h>
#include <string.h>

struct patient
{
    int ID;
    char name[10];
    char gender;
};
void passByReference(struct patient *p)
{
    p->ID = 105;
    printf(" The patient's ID is: %d \n", p->ID);

    printf(" The patient's name is: %s \n", p->name);

    printf(" The patient's gender is: %c \n", p->gender);
}

//array of structures
struct student
{
    char name[10];
    int marks;
};

struct student stu[4];
int i,j;
void takePrint( )
{
    for(i = 0; i < 4; i++)
    {
    printf("\n enter the name of  student %d\n", i+1);
    scanf( "%9s", stu[i].name);
    printf("enter the marks of student %d\n",  i+1);
    scanf( "%d", &stu[i].marks);
    }

    for(i = 0; i < 4; i++)
    {
    printf("\nThe name and the marks of student %d are: %s %d\n", i + 1, stu[i].name, stu[i].marks);
    }
}

int main(void)
{
struct patient P1;
strcpy(P1.name, "abc");
P1.gender = 'm';
passByReference(&P1);
printf("\n The original value of ID is: %d\n\n", P1.ID);

takePrint( );
    return (0);
}