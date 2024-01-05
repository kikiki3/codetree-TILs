#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    bool satisfied = true;

    for (int i = 0; i < 5; i++) {
        scanf("%d\n", &a);
        if (a % 3 != 0) {
            satisfied = false;
        }
    }
    if (satisfied == true) {
        printf("1");
    }
    else {
        printf("0");
    }
}