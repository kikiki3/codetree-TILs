#include <stdio.h>

int main() {
    int old, sex;
    scanf("%d\n%d", &sex, &old);

    if (old >= 19) {
        if(sex == 1 ) {
            printf("WOMAN");
        }
        else {printf("MAN");}
    }
    else {
        if (sex == 1) {
            printf("GIRL");
        }
        else {printf("BOY");}
    }
}