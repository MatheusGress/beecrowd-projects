#include <stdio.h>

int main() {
   
    int N = 0, i = 0;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidades[7] = {0};

         scanf("%d", &N);
         printf("%d\n", N);
         
    for (i = 0; i < 7; ++i) {
        quantidades[i] = N / cedulas[i];
        N %= cedulas[i];
    }
   
    for (int i = 0; i < 7; ++i) {
        printf("%d nota(s) de R$ %d,00\n", quantidades[i], cedulas[i]);
    }

    return 0;
}
