#include <iostream>
#include <iomanip>

int main() {
    double salario_atual, novo_salario, aumento;
    int percentual;

    std::cin >> salario_atual;

    if (salario_atual <= 400.00) {
        percentual = 15;
    } else if (salario_atual <= 800.00) {
        percentual = 12;
    } else if (salario_atual <= 1200.00) {
        percentual = 10;
    } else if (salario_atual <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    aumento = salario_atual * (percentual / 100.0);
    novo_salario = salario_atual + aumento;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: " << novo_salario << std::endl;
    std::cout << "Reajuste ganho: " << aumento << std::endl;
    std::cout << "Em percentual: " << percentual << " %" << std::endl;

    return 0;
}

