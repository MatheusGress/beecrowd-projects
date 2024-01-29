#include <stdio.h>

int main() {
 
   int A = 0, B = 0, C = 0, Maior = 0;
   
    scanf("%d %d %d", &A, &B, &C);
   
    Maior = A;
    
    if (B > Maior) {
        Maior = B;
    }
  
    if (C > Maior) {
        Maior = C;
    }
   
    printf("%d eh o maior\n", Maior);
   
    return 0;
}
