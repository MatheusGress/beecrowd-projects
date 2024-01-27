#include <stdio.h>
#include <math.h> 

int main() {
 
  double pi = 3.14159, A = 0, B = 0, C = 0, Area = 0;

  scanf("%lf %lf %lf", &A, &B, &C);
  
  Area = (A * C) / 2;
   printf("TRIANGULO: %.3lf\n", Area);
  
  Area = pi * pow(C, 2); 
  printf("CIRCULO: %.3lf\n", Area);

  Area = ((A + B) * C) / 2;
   printf("TRAPEZIO: %.3lf\n", Area);

  Area = pow (B, 2);
   printf("QUADRADO: %.3lf\n", Area);
  
  Area = A * B;
   printf("RETANGULO: %.3lf\n", Area);

    return 0;
}
