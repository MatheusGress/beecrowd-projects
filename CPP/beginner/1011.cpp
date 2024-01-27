#include <stdio.h>
 
int main() {
 
   int R = 0;
   double Volume = 0, pi = 3.14159; 
   
   scanf("%d", &R);
   
   Volume = (4/3.0) * pi * R * R * R;
   
   printf("VOLUME = %.3lf\n", Volume);
   
    return 0;
}
