#include <stdio.h>

struct student
{
 char name[10];
 int id;
 char grade;
 float mark;
};

int main()
{
    struct student student1;
    printf("enter name of the student ");
    scanf("%s", student1.name);
    printf("enter id");
    scanf("%d", &student1.id);
    printf("enter grade");
    scanf("%c", student1.grade);
    printf("enter the mark");
    scanf("%f", &student1.mark);


    printf("name\tid\tgrade\tmark\n");
    printf("%s\t%d\t%c\t%f\n",student1.name,student1.id,student1.grade,student1.mark);

}