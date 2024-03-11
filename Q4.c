#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;
    
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d marks: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    
    char grade;
    if (totalMarks >= 90) {
        grade = 'E';
    } else if (totalMarks >= 80) {
        grade = 'A';
    } else if (totalMarks >= 70) {
        grade = 'B';
    } else if (totalMarks >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    
    printf("Total Marks: %d\n", totalMarks);
    printf("Grade: %c\n", grade);
    
    return 0;
}