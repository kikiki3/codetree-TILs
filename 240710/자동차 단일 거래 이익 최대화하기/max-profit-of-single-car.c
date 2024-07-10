#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   int car[n];
   for (int i = 0; i < n; i++){
    scanf("%d ", &car[i]);
   }

   int maxPro = 0;

   for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
        int profit = car[j] - car[i];
        if (profit > maxPro) {
            maxPro = profit;
        }
    }
   }

   printf("%d", maxPro);
   
}