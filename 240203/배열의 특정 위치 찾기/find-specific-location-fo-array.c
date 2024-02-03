#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int r = 0;
    double avg;
    int cnt = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if ((i-1) % 2 == 0) {
            sum+=arr[i];
        }
        if ((i+1) % 3 == 0) {
            r += arr[i];
            cnt++;
        }
    }
    avg = r / cnt;
    printf("%d %.1lf", sum, avg);
}