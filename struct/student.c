#include <stdio.h>

struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    printf("name\troolno\tmarks\n");
    for (i = 0; i < 5; ++i) {

        printf("%s\t%d\t%f\n",s[i].firstName,i+1, s[i].marks);
        // printf("%d\n", i + 1);
        // printf("First name: ");
        // puts(s[i].firstName);
        // printf("Marks: %.1f", s[i].marks);
        // printf("\n");
    }
    return 0;
}