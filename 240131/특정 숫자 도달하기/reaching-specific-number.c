#include <stdio.h>

int main() {
    int a[10];
    int sum = 0;
    double avg = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 250) {
            sum+=a[i];
            cnt++;
        }
        else{
            break;
        }
    }
    avg = (double)sum / cnt;
    printf("%d %.1lf", sum, avg);
}