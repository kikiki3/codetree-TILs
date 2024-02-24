#include <stdio.h>

int main() {
    int n, q;

    scanf("%d %d", &n, &q);
    int n_arr[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d ", &n_arr[i]);
    }

    for (int i = 0; i < q; i++) {
        int q_t;
        int a, b;
        scanf("%d ", &q_t);

        if (q_t == 1) {
            scanf("%d", &a);
            printf("%d\n", n_arr[a-1]);
        }
        else if (q_t == 2) {
            scanf("%d", &a);
            for (int i = 0; i < n; i++) {
                if (n_arr[i] == a) {
                    printf("%d\n", i+1);
                    break;
                }
                else if (i == n-1) {
                    printf("0\n");
                }   
            }        
        }
        else {
            scanf("%d %d", &a, &b);
            for (int i = a-1; i <= b-1; i++) {
                printf("%d ", n_arr[i]);
            }
            printf("\n");
        }
    }
}