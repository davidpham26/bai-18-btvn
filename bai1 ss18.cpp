#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;
    char tempName[] = "Pham Minh Phong";
    for (int i = 0; i < sizeof(tempName); i++) {
        student1.name[i] = tempName[i];
    }
    student1.age = 18;
    char tempPhone[] = "0886551556";
    for (int i = 0; i < sizeof(tempPhone); i++) {
        student1.phoneNumber[i] = tempPhone[i];
    }

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}

