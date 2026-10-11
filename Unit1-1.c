

#include <stdio.h>

int main()
{
    int age;
    float marks;
    double salary;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Student Details ---\n");
    printf("Age: %d\n", age);
    printf("Marks: %f\n", marks);
    printf("Salary: %lf\n", salary);
    printf("Grade: %c\n", grade);

    return 0;
}
