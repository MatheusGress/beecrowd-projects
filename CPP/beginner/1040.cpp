#include <stdio.h>

int main() {
    double N1 = 0.0, N2 = 0.0, N3 = 0.0, N4 = 0.0, average = 0.0, examScore = 0.0, finalAverage = 0.0;
  
        scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

        printf("Media: %.1lf\n", average);

    if (average >= 7.0) {
         printf("Aluno aprovado.\n");
      } else if (average < 5.0) {
            printf("Aluno reprovado.\n");
        } else {
              printf("Aluno em exame.\n");
              scanf("%lf", &examScore);
              printf("Nota do exame: %.1lf\n", examScore);
      
            finalAverage = (average + examScore) / 2.0;

          if (finalAverage >= 5.0) {
              printf("Aluno aprovado.\n");
        } else {
         printf("Aluno reprovado.\n");
         printf("Media final: %.1lf\n", finalAverage);
     }

    return 0;
}
