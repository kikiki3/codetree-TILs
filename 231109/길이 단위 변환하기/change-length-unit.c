#include <stdio.h>

int main() {
    double ft = 30.48;
    double a = 9.2;
    double mi = 160934;
    double b = 1.3;
    printf("%.1lfft = %.1lfcm\n%.1lfmi = %.1lfcm",
                                        a, a*ft, b, b*mi);
    return 0;
}