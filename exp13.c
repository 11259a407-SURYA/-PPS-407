#include <stdio.h>

// Define structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    // Declare array of structures
    struct Student s[3];

    // Input data
    for (int i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}