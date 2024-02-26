#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int N_arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &N_arr[i]);
    }

    int t = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (N_arr[i] > N_arr[j]) {
                t = N_arr[i];
                N_arr[i] = N_arr[j];
                N_arr[j] = t;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("%d ", N_arr[i]);
    }
}