#include <stdio.h>

enum Day { MON, TUE, WED, THU, FRI };

int main() {
    enum Day d = WED;

    printf("Day value: %d\n", d);

    return 0;
}

