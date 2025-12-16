#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

int main() {
    struct Complex x, y, r;

    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%d %d", &x.real, &x.imag);

    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%d %d", &y.real, &y.imag);

    r = add(x, y);
    printf("Addition: %d + %di\n", r.real, r.imag);

    r = sub(x, y);
    printf("Subtraction: %d + %di\n", r.real, r.imag);

    return 0;
}

