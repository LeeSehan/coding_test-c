#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    do {
        printf("%s", s1);
        --a;
    } while (a);
    return 0;
}