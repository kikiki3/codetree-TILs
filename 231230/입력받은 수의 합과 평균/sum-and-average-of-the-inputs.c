#include <stdio.h>

int main() {
    int n,m;
    int sum = 0;
    int cnt = 0;
    double avg;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d\n", &m);

        sum += m;
        cnt++;
    }

    avg = (double)sum / cnt;

    printf("%d %.1lf", sum, avg);
}