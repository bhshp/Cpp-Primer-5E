#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item sum;
    if (std::cin >> sum) {
        Sales_item temp;
        while (std::cin >> temp) {
            sum += temp;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}