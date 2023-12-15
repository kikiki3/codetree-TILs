#include <stdio.h>

int main() {
    float Ae, Be;
    scanf("%f\n%f", &Ae, &Be);

    if (Ae >= 1.0 && Be >= 1.0) {
        printf("High");
    }
    else if (Ae >= 0.5 && Be >= 0.5) {
        printf("Middle");
    }
    else {
        printf("Low");
    }
}