#include <stdio.h>

int main() {
    int n;
    int sum = 0, cnt = 0;
    double avg;

    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &n);

        if (n >= 0 && n <= 200) {
            sum += n;
            cnt++;
        }
    }

    avg = (double)sum / cnt;

    printf("%d %.1lf", sum, avg); 
}