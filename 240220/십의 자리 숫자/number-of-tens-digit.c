#include <stdio.h>

int main() {
    //배열 선언
    int count_arr[10] = {0, };
    int arr[99];

    for (int i = 0; i < 99; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break;
        if (arr[i] < 10)
            continue;
        count_arr[arr[i] / 10]++;
    }

    for (int i = 1; i < 10; i++) {
        printf("%d - %d\n", i, count_arr[i]);
    }
}