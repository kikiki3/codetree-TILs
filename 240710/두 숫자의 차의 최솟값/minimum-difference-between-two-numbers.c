#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    int minSub = 1000;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int sub = arr[j] - arr[i];
            if (arr[j] - arr[i] < 0) {
                sub = abs(arr[j]- arr[i]);
            }
            
            if (sub < minSub) {
                minSub = sub;
            }

        }
    }

    printf("%d", minSub);
}