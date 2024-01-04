#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;

    while (1) {
        scanf("%d\n", &n);
        if (n / 10 != 2)
        break;
        sum += n;
        cnt++;

        

    }
    printf("%.2lf", (double)sum / cnt );
}