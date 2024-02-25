#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int N_arr[N];
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &N_arr[i]);
    }

    int min_val = INT_MAX;

    for (int i = 0; i < N; i++) {
        if (min_val > N_arr[i]) {
            min_val = N_arr[i];
            if (min_val == N_arr[i]) {
                cnt++;
            }
            else {
                cnt = 0;
            }
        }
    }

    printf("%d %d", min_val, cnt);
}