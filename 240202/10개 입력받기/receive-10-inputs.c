#include <stdio.h>

int main() {
    int arr[10];

    int sum = 0;
    double avg;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] == 0) {
            break;
        }
        cnt++;
    }
    avg = (double)sum/cnt;

    printf("%d %.1lf", sum, avg);

}