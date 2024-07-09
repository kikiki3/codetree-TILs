#include <stdio.h>

int main() {
    //배열을 구현합니다.
    int arr[10]
    //10개의 정수를 입력받습니다.
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = 1;
    int min_val = 1000;

    for (int i = 0; i < 10; i++) {
        if(arr[i] < 500 && arr[i] > max_val) {
            max_val = arr[i]
        }

        if(arr[i] > 500 && arr[i] > min_val) {
            min_val = arr[i];
        }

        print("%d %d", max_val, min_val);
    }
}