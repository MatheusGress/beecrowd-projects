#include <stdio.h>

int main() {
   
    int N = 0, i = 0;
    int BankNotes[] = {100, 50, 20, 10, 5, 2, 1};
    int quantity[7] = {0};

         scanf("%d", &N);
         printf("%d\n", N);
         
    for (i = 0; i < 7; ++i) {
        quantity[i] = N / BankNotes[i];
        N %= BankNotes[i];
    }
   
    for (int i = 0; i < 7; ++i) {
        printf("%d nota(s) de R$ %d,00\n", quantity[i], BankNotes[i]);
    }

    return 0;
}
