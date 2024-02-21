#include <stdio.h>

int main() {
    char YN[3];
    int T[3];

    int hos[4] = {0, };

    for (int i = 0; i < 3; i++) {
        scanf("%c %d\n", &YN[i], &T[i]);
        if (YN[i] == 'Y' && T[i] >= 37) {
            hos[0]++;
        }
        else if (YN[i] == 'N' && T[i] >= 37) {
            hos[1]++;
        }
        else if (YN[i] == 'Y' && T[i] < 37) {
            hos[2]++;
        }
        else {
            hos[3]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", hos[i]);
    }
    if (hos[0] >= 2) {
        printf("E");
    } 
}