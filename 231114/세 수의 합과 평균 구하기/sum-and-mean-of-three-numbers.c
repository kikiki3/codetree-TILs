#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d", a+b+c, (a+b+c)/3);
    return 0;
}