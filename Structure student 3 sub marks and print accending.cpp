#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float sub1;
    float sub2;
    float sub3;
    float total;
};

int main() {
    int n;

    printf("Enter the total number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    printf("Enter the students' details as mentioned:\n");

    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter the three subjects marks:\n");
        printf("Sub 1: ");
        scanf("%f", &s[i].sub1);
        printf("Sub 2: ");
        scanf("%f", &s[i].sub2);
        printf("Sub 3: ");
        scanf("%f", &s[i].sub3);

        // Calculate the total marks for each student
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
    }

    // Implement a simple bubble sort to sort students by total marks
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].total < s[j + 1].total) {
                // Swap the students if they are out of order
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Students Details (Descending Order of Total Marks):\n");

    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Sub 1: %.2f\n", s[i].sub1);
        printf("Sub 2: %.2f\n", s[i].sub2);
        printf("Sub 3: %.2f\n", s[i].sub3);
        printf("Total Marks: %.2f\n", s[i].total);
    }

    return 0;
}
