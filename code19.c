#include <stdio.h>
int main()
{
    float marks;
    printf("Enter marks (0-100):");
    scanf("%F", &marks);
    if (marks < 0 || marks> 100) {
        printf("Invalid marks.\n");
    }
    else if (marks < 40) {
        printf("Result: Failed\n");
        printf("Grade: F\n");
    }
    else if (marks >= 90){
        printf("Result : Pass with Distict\n");
        printf("Grade: A+\n");
    }
    else if (marks >=80) {
        printf("Result: Pass\n");
        printf("Grade: A\n");
    }
    else if (marks >=70){
        printf("Result: Pass\n");
        printf("Grade: B+\n");
    }
    else if (marks >=60) {
        printf("Result: Pass\n");
        printf("Grade: B\n");
    }
    else if (marks >-50){
        printf("Result: Pass\n");
        printf("Grade: C\n");
    }
    return 0;
}
