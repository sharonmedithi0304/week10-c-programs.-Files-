#include <stdio.h>

int main() {
    int n, temp, rev = 0, r;

    printf("Enter a number:\n");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}

