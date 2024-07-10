#include <stdio.h>

int main() {
    char str[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%c ", &str[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            str[i][j] = str[i][j] - 32;
            printf("%c ", str[i][j]);
        }
        printf("\n");
    }
}