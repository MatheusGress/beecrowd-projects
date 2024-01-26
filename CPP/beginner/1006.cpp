#include <stdio.h>
 
int main() {
 
    double A, B, C, MEDIA = 0;
    double weightA = 2, weightB = 3, weightC = 5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    MEDIA = ((A * weightA) + (B * weightB) + (C * weightC)) / (weightA + weightB + weightC);
    
    printf("MEDIA = %.1lf\n", MEDIA);
    
    return 0;
}
