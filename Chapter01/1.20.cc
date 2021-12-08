#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item item;
    while (std::cin >> item) {
        // 0-201-78345-X 3 20.00
        std::cout << item << std::endl;
    }
    return 0;
}