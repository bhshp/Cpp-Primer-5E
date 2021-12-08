// note: **1.11** P11, first **bigger** than second

#include <iostream>
#include <utility>

int main() {
    std::cout << "Enter 2 integers:" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > b) {
        std::swap(a, b);
    }
    while (a <= b) {
        std::cout << a++ << std::endl;
    }
    return 0;
}