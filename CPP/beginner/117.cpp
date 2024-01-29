#include <stdio.h>
 
int main() {
    
    int Hours = 0, Km = 0;
    double Fuel = 0;
 
        scanf("%d", &Hours);
        scanf("%d", &Km);
     
    Fuel = (double) Km * Hours / 12;    
        
        printf("%.3lf\n", Fuel);
        
    return 0;
}
