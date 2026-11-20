#include <iostream>

int main () {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " is Even." << std::endl;
    } else {
        std::cout << number << " is Odd." << std::endl;
    }
    return 0;
}