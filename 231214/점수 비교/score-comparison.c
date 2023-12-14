#include <stdio.h>

int main() {
    int Amath, Aeng, Bmath, Beng;
    scanf("%d %d\n%d %d", &Amath, &Aeng, &Bmath, &Beng);

    printf("%d", Amath > Bmath && Aeng > Beng);
}