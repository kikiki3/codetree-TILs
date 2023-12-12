#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);

    b = a = 100 ? printf("pass") : printf("failure");
}