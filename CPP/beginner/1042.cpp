#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
        std::cin >> A >> B >> C;

    int arr[3] = {A, B, C};
        std::sort(arr, arr + 3); 

    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << std::endl;
    }

        std::cout << std::endl;
      
        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;

    return 0;
}
