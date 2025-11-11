#include <iostream>

int main() {
    // Ensure basic IO streams are usable
    if (!std::cin.good() || !std::cout.good()) {
        return 1; // non-zero on I/O failure
    }

    int a;
    std::cin >> a;
    std::cout << a << std::endl;

    return 0;
}
