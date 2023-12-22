#include <stdio.h>

int main() {
    int at, bt, ct;
    char A, B, C;

    scanf("%c %d\n%c %d\n%c %d", &A, &at, &B, &bt, &C, &ct);

    if (A == 'Y' && B == 'Y' || B == 'Y' && C == 'Y' || A == 'Y' && C == 'Y') 
    {
        if (at >= 37 && bt >= 37 || bt >= 37 && ct >= 37 || at >= 37 && ct >= 37) {
            printf("E");
        }
        else {printf("N");}
    }
    else {
        printf("N");    }
}