#include <stdio.h>

int main() {
    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        cnt++;
        if (arr[i] == 999 || arr[i] == -999) {
            cnt = cnt - 1;
            break;
        }
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < cnt; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("%d %d", max, min);


}