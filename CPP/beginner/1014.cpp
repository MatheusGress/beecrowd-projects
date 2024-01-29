#include <stdio.h>
 
int main() {
 
  int KM = 0;
  double  Fuel = 0, Average = 0;
  
    scanf("%d", &KM);
    scanf("%lf", &Fuel);
    
  Average = KM / Fuel;
  
    printf("%.3lf km/l\n", Average);
    
    return 0;
}
