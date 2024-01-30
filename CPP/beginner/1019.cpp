#include <stdio.h>
 
int main() {
 
    int N = 0, seconds = 0, minutes = 0, hours = 0;
        
        scanf("%d", &N);
    
    hours = N / 3600;
    minutes = (N %= 3600) / 60;
    seconds = N % 60;
    
        printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
