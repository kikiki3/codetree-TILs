#include <stdio.h>

int main() {
    int Am, Ae;
    int Bm, Be;

    scanf("%d %d\n", &Am, &Ae);
    scanf("%d %d", &Bm, &Be);

    if (Am > Bm || (Am == Bm && Ae > Be)) {
        printf("A");
    }
    else {
        printf("B");
    }
}