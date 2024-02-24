#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d\n", &n1, &n2);

    int A[n1];

    for (int i = 0; i < n1; i++) {
        scanf("%d ", &A[i]);
    }

    int B[n2];

    for (int i = 0; i < n2; i++) {
        scanf("%d ", &B[i]);
    }

    for (int i = 0; i < n1; i++) {
        if (B[0] == A[i]) {
            for (int j = 0; j < n2; j++) {
                if (B[j] == A[i+j]) {
                    printf("Yes");
                    break;
                }
                else {
                    printf("No");
                    break;
                }
            }
        }
        else {printf("No");
        break;}

    }
}