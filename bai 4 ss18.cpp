#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];
    int i, j;

    for (i = 0; i < 5; i++) {
        students[i].id = i + 1;

        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
        getchar();

        printf("Enter phone number of student %d: ", i + 1);
        scanf("%s", students[i].phoneNumber);
        getchar();
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", students[i].id);
        printf("Name: %s", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
    }

    return 0;
}

