#include <iostream>
#include "../src/sum.h"

int main() {
    if (sum(2, 3) != 5) {
        std::cerr << "Test failed: 2 + 3 should equal 5\n";
        return 1;
    }

    if (sum(-1, 1) != 0) {
        std::cerr << "Test failed: -1 + 1 should equal 0\n";
        return 1;
    }

    std::cout << "All tests passed!\n";
    return 0;
}
