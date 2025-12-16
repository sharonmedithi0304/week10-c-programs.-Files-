#include <stdio.h>

int main() {
    FILE *fp;
    long size;
    char ch;

    fp = fopen("data.txt", "r");

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    while (size > 0) {
        size--;
        fseek(fp, size, SEEK_SET);
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

