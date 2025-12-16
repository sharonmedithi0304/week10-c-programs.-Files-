#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    while ((ch = fgetc(fp1)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Case changed successfully\n");
    return 0;
}

