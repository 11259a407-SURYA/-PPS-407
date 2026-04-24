#include <stdio.h>

// Union for marks
union Marks {
    int totalMarks;
};

// Structure for student information
struct Student {
    char name[50];
    int rollNo;
    int age;
    union Marks m;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter total marks: ");
    scanf("%d", &s.m.totalMarks);

    // Display student details
    printf("\n--- Student Information ---\n");
    printf("Name       : %s\n", s.name);
    printf("Roll No    : %d\n", s.rollNo);
    printf("Age        : %d\n", s.age);
    printf("Marks      : %d\n", s.m.totalMarks);

    return 0;
}