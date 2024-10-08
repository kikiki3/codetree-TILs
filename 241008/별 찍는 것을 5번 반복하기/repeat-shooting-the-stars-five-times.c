#include <stdio.h>

void Print10Stars() {
        for (int i = 0; i < 10; i++) {
            printf("*");
        }
        printf("\n");
    }

int main() {
    for (int i = 0; i < 5; i++) {
        Print10Stars();
    }
}