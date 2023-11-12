#include <stdio.h>

int main() {
    char s[100];
    double b;
    double c;

    scanf("%s", s);
    scanf("%lf %lf", &b, &c);
    printf("%s\n%.2lf\n%.2lf", s, b, c);
    return 0;
}