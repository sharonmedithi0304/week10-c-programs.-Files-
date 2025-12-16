#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name, id, salary for employee %d:\n", i + 1);
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 3; i++) {
        printf("%s %d %.2f\n", e[i].name, e[i].id, e[i].salary);
    }

    return 0;
}

