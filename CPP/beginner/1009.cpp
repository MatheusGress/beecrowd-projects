#include <stdio.h>
 
int main() {
    
    char Name[50];
    double Salary = 0, Products = 0, Bonus = 0, Total = 0;
    
    scanf("%s", &Name);
    scanf("%lf", &Salary);
    scanf("%lf", &Products);
    
    Bonus = (15 * Products) / 100;
    
    Total = Salary + Bonus;
    
    printf("TOTAL = R$ %.2lf\n", Total);
   
    return 0;
}
