#include <stdio.h>
 
int main() {
 
    double A, B, MEDIA = 0;
    double pesoA = 3.5, pesoB = 7.5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    MEDIA = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);
    
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
}
