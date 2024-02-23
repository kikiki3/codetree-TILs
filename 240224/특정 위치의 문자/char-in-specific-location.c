#include <stdio.h>

int main() {
    char dax[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    int idx = -1;

    char n;
    scanf("%c", &n);

    for (int i = 0; i < 6; i++) {
        if (dax[i] == n) {
            idx = i;
        }
    }

    if (idx == -1) {
        printf("None");
    }
    else {
        printf("%d", idx);
    }
}