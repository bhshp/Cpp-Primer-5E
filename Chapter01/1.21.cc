#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item a, b;
    while (std::cin >> a >> b) {
        if (a.isbn() == b.isbn()) {
            std::cout << a + b << std::endl;
        }
    }
    return 0;
}