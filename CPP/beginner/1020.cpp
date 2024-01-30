#include <stdio.h>
 
int main() {
 
    int N = 0, i = 0, days = 0, months = 0, years= 0;
        
        scanf("%d", &N);
    
    years = N / 365;
    months = (N %= 365) / 30;
    days = N % 30;
    
        printf("%d ano(s)\n", years);
        printf("%d mes(es)\n", months);
        printf("%d dia(s)\n", days);

    return 0;
}
