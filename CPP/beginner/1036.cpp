#include <stdio.h>
#include <math.h>

int main() {
    double A = 0, B = 0, C = 0, R1 = 0, R2 = 0, Delta = 0;

        scanf("%lf %lf %lf", &A, &B, &C);

    Delta = pow(B, 2) - 4 * A * C;

    if (A != 0 && Delta >= 0) { 
        R1 = (-B + sqrt(Delta)) / (2 * A);
        R2 = (-B - sqrt(Delta)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
