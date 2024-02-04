#include <stdio.h>

int main() {
    int arr[10];
    int a = 0;
    int s = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if ((i-1) % 2 == 0) {
            s += arr[i];
        }
        else {
            a += arr[i];
        }
    }
    if (a >= s) {
        printf("%d", a-s);
    }
    else {
        printf("%d", s-a);
    }
    
}