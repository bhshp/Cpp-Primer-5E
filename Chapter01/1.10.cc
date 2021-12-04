#include <iostream>

int main() {
    int start = 10, sum = 0;
    while (start > 0) {
        sum += start--;
    }
    std::cout << sum << std::endl;
    return 0;
}