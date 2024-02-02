#include <iostream>

int main() {
    int A, B;
    
    std::cin >> A >> B;
    
    if (A % B == 0 || B % A == 0) {
        std::cout << "Sao Multiplos" << std::endl; 
        } else {
            std::cout << "Nao sao Multiplos" << std::endl; 
        } 
 
    return 0;
}
