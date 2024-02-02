#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
  
    double A, B, C;
  
      std::cin >> A >> B >> C; 

    double sides[3] = {A, B, C};
    std::sort(sides, sides + 3, std::greater<double>());

    A = sides[0];
    B = sides[1];
    C = sides[2];

    if (A >= B + C) {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
    } 
    else {
          if (std::pow(A, 2) == std::pow(B, 2) + std::pow(C, 2)) {
              std::cout << "TRIANGULO RETANGULO" << std::endl;
          } 
          else if (std::pow(A, 2) > std::pow(B, 2) + std::pow(C, 2)) {
              std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
          } 
          else {
              std::cout << "TRIANGULO ACUTANGULO" << std::endl;
          }
    
              if (A == B && B == C) {
                  std::cout << "TRIANGULO EQUILATERO" << std::endl;
              } 
              else if (A == B || B == C || A == C) {
                  std::cout << "TRIANGULO ISOSCELES" << std::endl;
              }
      }

    return 0;
}
