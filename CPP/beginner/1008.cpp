#include <stdio.h>
 
int main() {
 
   int Number = 0, Hours = 0;
   double Salary = 0, SalaryHour = 0;
   
   scanf("%d", &Number);
   scanf("%d", &Hours);
   scanf("%lf", &SalaryHour);
   
   Salary = SalaryHour * Hours;
   
   printf("NUMBER = %d\n", Number);
   printf("SALARY = U$ %.2lf\n", Salary);
 
    return 0;
}
