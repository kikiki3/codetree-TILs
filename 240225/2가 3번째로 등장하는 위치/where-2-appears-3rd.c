#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int n_arr[n];

    int cnt = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &n_arr[i]);
        if (n_arr[i] == 2) {
            cnt++;
            if (cnt == 3) {
                ans = i+1;
                break;
            }
        }
    }

    printf("%d", ans);
}