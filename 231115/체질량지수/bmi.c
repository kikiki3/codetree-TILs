#include <stdio.h>

int main() {
    int h;
    int w;
    scanf("%d %d", &h, &w);
    int BMI = w*10000 / (h*h);
    printf("%d\n",BMI);
    if(BMI >= 25) {
        printf("Obesity");
    }
    return 0;
}