#include <stdio.h>

int main() {
    int FirstCode = 0, SecondCode = 0, FirstUnit = 0, SecondUnit = 0;
    double FirstPrice = 0, SecondPrice = 0, EndPrice = 0;

    scanf("%d %d %lf", &FirstCode, &FirstUnit, &FirstPrice);

    scanf("%d %d %lf", &SecondCode, &SecondUnit, &SecondPrice);

    EndPrice = (FirstUnit * FirstPrice) + (SecondUnit * SecondPrice);
  
    printf("VALOR A PAGAR: R$ %.2lf\n", EndPrice);

    return 0;
}
