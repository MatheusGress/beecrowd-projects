#include <iostream>
 
int main() {
 
    int HourStart = 0, HourEnd, HourTotal = 0;
    
        std::cin >> HourStart >> HourEnd;
    
    if (HourEnd > HourStart){
    HourTotal = HourEnd - HourStart;
        std::cout << "O JOGO DUROU " << HourTotal << " HORA(S)" << std::endl;    
    } else {
    HourTotal = (24 - HourStart) + HourEnd;
        std::cout << "O JOGO DUROU " << HourTotal << " HORA(S)" << std::endl;    
    }
    
    return 0;
}
