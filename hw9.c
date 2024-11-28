#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[100];
    int i;

    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Output> ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            putchar(tolower(str[i]));
        }
        else if (islower(str[i])) {
            putchar(toupper(str[i]));
        }
        else {
            putchar(str[i]);
        }
    }
    printf("\n");
    return 0;
}
