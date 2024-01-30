#include <stdio.h>
 
int main() {
 
   int A = 0, B = 0, C = 0, D = 0, sumAB = 0, sumCD = 0;
   
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
   sumAB = A + B;     
   sumCD = C + D;
   
   if (B > C && D > A && sumCD > sumAB && C > 0 && D > 0 && A % 2 == 0) {

        printf("Valores aceitos\n");
   }    
     
    else {
        
        printf("Valores nao aceitos\n");
    } 
    return 0;
}
