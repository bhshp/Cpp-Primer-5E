#include <iostream>

int main() {
    {
        int sum = 0;
        for (int i = -50; i <= 100; ++i) {
            sum += i;
        }
        std::cout << sum << std::endl;
    }
    {
        int sum = 0;
        for (int i = 10; i >= 0; --i) {
            sum += i;
        }
        std::cout << sum << std::endl;
    }
    {
        std::cout << "Enter 2 integers: " << std::endl;
        int a = 0, b = 0;
        std::cin >> a >> b;
        for (int i = a; i <= b; ++i) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}