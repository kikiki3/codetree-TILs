#include <stdio.h>

int main() {
    int a = 5; int b = 6; int c = 7;
    int temp;
    
    temp = c;
    c = b;
    b = a;
    a = temp;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}