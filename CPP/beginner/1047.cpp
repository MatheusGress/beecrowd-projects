#include <iostream>

int main() {
    int HourStart = 0, MinuteStart = 0, HourEnd = 0, MinuteEnd = 0;
    int TotalHours = 0, TotalMinutes = 0;
    
    std::cin >> HourStart >> MinuteStart >> HourEnd >> MinuteEnd;

    TotalMinutes = (HourEnd * 60 + MinuteEnd) - (HourStart * 60 + MinuteStart);

    if (TotalMinutes < 1) {
        TotalMinutes += 24 * 60;
    }

    TotalHours = TotalMinutes / 60;
    TotalMinutes %= 60;

    std::cout << "O JOGO DUROU " << TotalHours << " HORA(S) E " << TotalMinutes << " MINUTO(S)" << std::endl;

    return 0;
}

