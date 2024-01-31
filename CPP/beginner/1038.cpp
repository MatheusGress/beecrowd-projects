#include <stdio.h>
 
int main() {
 
   int X = 0, Y = 0;
   double total = 0.0;
   double code[] = {4.00, 4.50, 5.00, 2.00, 1.50};
  
        scanf("%d %d", &X, &Y);
   
   total = code[X-1] * Y;
   
        printf("Total: R$ %.2lf\n", total);
 
    return 0;
}
