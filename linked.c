#include <stdio.h>
#include <string.h>

//declare structure
struct student
{
    int class;
    int age;
    char name[12];
    struct student *link;
};

//entry point
int main(void)
{

    //node one
struct student student1;
student1.class = 3;
student1.age = 10;
strcpy(student1.name, "Antony");
student1.link = NULL;

//edited pointer
struct student *ptr =&student1;

//node 2
struct student student2;
student2.class = 8;
student2.age = 14;
strcpy(student2.name, "kinuthia");
student2.link = NULL;
//link the two nodes
student1.link = &student2; 

//access members of node 2 using node 1
printf("\n%d", student1.link->class);
printf("\n%d", student1.link->age);
printf("\n%s",  student1.link->name);

//printing student 1
printf("\nstudent 1 details");
printf("\nstudent age: %d \nclass: %d  \nname: %s", ptr->age, ptr->class, ptr->name);
return (0);
};