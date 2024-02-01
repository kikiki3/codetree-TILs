#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double arr[100];
    double sum = 0;
    double avg;

    for (int i = 0; i < n; i++) {
        scanf("%lf ", &arr[i]);
        sum += arr[i];
    }
    avg = (double)sum / n;
    printf("%.1lf\n", avg);
    if (avg >= 4.0) {
        printf("Perfect");
    }
    else if (avg >= 3.0) {
        printf("Good");
    }
    else {
        printf("Poor");
    }
}