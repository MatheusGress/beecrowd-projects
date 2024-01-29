#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1 = 0, x2 = 0, y1 = 0, y2 = 0, Distance = 0;
 
        scanf("%lf %lf", &x1, &y1);
        scanf("%lf %lf", &x2, &y2);
        
    Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
        printf("%.4lf\n", Distance);
        
    return 0;
}
