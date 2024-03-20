#include <stdio.h>
#define MAX_N 1000

int main() {
    int N;
    scanf("%d", &N);

    int a[MAX_N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int prev_max_idx = N;

    while(1) {
        int max_idx = 0;

        for (int i = 1; i < prev_max_idx; i++) {
            if(a[i] > a[max_idx]) {
                max_idx = i;
            }
        }

        printf("%d ", max_idx + 1);

        if(max_idx == 0) {
            break;
        }

        prev_max_idx = max_idx;
    }
}