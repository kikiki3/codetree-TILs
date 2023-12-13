#include <stdio.h>

int main() {
    int tem;
    scanf("%d", &tem);
    
    if (tem < 0) {
        printf("ice");
    }
    else if (tem >= 100) {
        printf("vapor");
    }
    else {
        printf("water");
    }
}