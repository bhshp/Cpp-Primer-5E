#include <iostream>

int main() {
    std::cout << "Enter 2 integers:" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    while (a <= b) {
        std::cout << a++ << std::endl;
    }
    return 0;
}