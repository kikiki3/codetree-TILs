#include <stdio.h>

int main() {
    float eye;
    scanf("%f", &eye);

    if (eye >= 1.0) {
        printf("High");
    }
    else if (eye >= 0.5) {
        printf("Middle");
    }
    else {
        printf("Low");
    }
}