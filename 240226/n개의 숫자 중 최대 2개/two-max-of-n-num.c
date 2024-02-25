#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int N_arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &N_arr[i]);
    }

    int max = N_arr[0];
    int max_i;

    for (int i = 0; i < N; i++) {
        if (max < N_arr[i]) {
            max = N_arr[i];
            max_i = i;
        }
    }

    int max_2 = N_arr[0];
    
    for (int i = 0; i < N; i++) {
        if (max_2 < N_arr[i] && i != max_i) {
            max_2 = N_arr[i];
        }
    }

    printf("%d %d", max, max_2);
}