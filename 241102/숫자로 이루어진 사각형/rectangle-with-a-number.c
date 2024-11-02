#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
                printf("%d ", count);
                count++;

                if (count > 9) {
                    count = 1;
                }
        }
        printf("\n");
    }
}