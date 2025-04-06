// This program lets an user enter an integer and returns the result of multiplying that integer with a 2

#include <iostream>

int main() {
    
    int input_integer {};
    std::cout << "Enter an integer: \n";
    std::cin >> input_integer;
    int double_integer {2 * input_integer};
    std::cout << "Double that number is: " << double_integer;
    return 0;
}