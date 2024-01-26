#include <stdio.h>
 
int main() {
 
    double A, B, MEDIA = 0;
    double weightA = 3.5, weightB = 7.5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    MEDIA = ((A * weightA) + (B * weightB)) / (weightA + weightB);
    
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
}
