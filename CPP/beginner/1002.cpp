#include <stdio.h>
 
int main() {
 
    double A = 0;
    double n = 3.14159;
    double R = 0;
    
    scanf("%lf", &R);
 
    A = n * (R * R);
    
    printf("A=%.4lf\n", A);
 
    return 0;
}
