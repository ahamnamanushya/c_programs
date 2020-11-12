#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int id;
    char grade;
    float mark;

};
int main()
{
    struct student std[10];
    strcpy(std[0].name,"hmm");
    std[0].id= 1234;
    std[0].grade='c';
    std[0].mark=77.33;
    printf("name\tid\tgrade\tmark ");
        // printf("%s\t,%d\t,%s\t,%f\t",std.name,std.id,std.grade,std.mark);
    printf("%s",std[0].name);
}
