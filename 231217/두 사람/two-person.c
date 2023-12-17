#include <stdio.h>

int main() {
    int Ao, Bo;
    char As, Bs;

    scanf("%d %c\n", &Ao, &As);
    scanf("%d %c", &Bo, &Bs);

    printf("%d", (Ao >= 19 && As == 'M') || (Bo >= 19 && Bs == 'M'));
}