#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d ", a);

    for (a; a < b; a+=0) {
        if (a % 2 != 0) {
            a *= 2;
        }
        else if (a % 2==0) {
            a+=3;
        }
        
        if (a <= b) {
            printf("%d ", a);
        }
    }
}