#include <stdio.h>

struct Address {
    int hno;
    char city[20];
    int pin;
};

struct Student {
    char name[20];
    int rollno;
    int marks[6];
    struct Address addr;
};

int main() {
    struct Student s;
    int i;

    printf("Enter name and roll no:\n");
    scanf("%s %d", s.name, &s.rollno);

    printf("Enter marks of 6 subjects:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &s.marks[i]);

    printf("Enter house no, city, pin:\n");
    scanf("%d %s %d", &s.addr.hno, s.addr.city, &s.addr.pin);

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll No: %d\n", s.name, s.rollno);
    printf("Address: %d, %s - %d\n", s.addr.hno, s.addr.city, s.addr.pin);

    return 0;
}

