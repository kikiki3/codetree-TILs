#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a >= 80) {
        printf("pass");
    }
    else {
        printf("80-%d more score", a);
    }
    return 0;
}