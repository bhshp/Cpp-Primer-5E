#include <iostream>

int main() {
    int sum = 0, d = 0;
    while (std::cin >> d) {
        sum += d;
    }
    std::cout << sum << std::endl;
    return 0;
}