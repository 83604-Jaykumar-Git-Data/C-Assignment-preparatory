#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int i, numStudents;

    printf("Enter number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    getchar();

    if (numStudents > MAX_STUDENTS) {
        printf("Error: Maximum number of students exceeded.\n");
        return 1;
    }

    printf("Enter names of students:\n");
    for (i = 0; i < numStudents; ++i) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }

    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);

    printf("\nSorted names of students:\n");
    for (i = 0; i < numStudents; ++i) {
        printf("%d. %s\n", i + 1, nameOfStudents[i]);
    }

    return 0;
}
