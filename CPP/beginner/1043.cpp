#include <iostream>
#include <iomanip>

int main() {
    double A = 0, B = 0, C = 0, perimeter = 0, area = 0;

    std::cin >> A >> B >> C;

    if (A + B > C && A + C > B && B + C > A) {
        perimeter = A + B + C;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Perimetro = " << perimeter << std::endl;
    } else {
        area = ((A + B) * C) / 2;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "Area = " << area << std::endl;
    }

    return 0;
}
