#include <stdio.h>

int main() {
    int arr[10];
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        if (arr[i] % 2 == 0) {
            sum+=arr[i];
            cnt++;
        }
    }
    printf("%d %d", cnt, sum);
}