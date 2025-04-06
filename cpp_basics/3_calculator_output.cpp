#include <iostream>

int main() {
    int x {};
    int y {};

    std::cout << "Enter the first operand: \n";
    std::cin >> x;
    std::cout << "Enter the second operand: \n";
    std::cin >> y;

    int subtraction {x - y};
    int addition {x + y};
    int multiplication {x * y};
    double division {static_cast<double>(x) / y};

    std::cout << "Results are as follows: \n";
    std::cout << "Addition: " << addition << '\n';
    std::cout << "Subtraction: " << subtraction << '\n';
    std::cout << "Division: " << division << '\n';
    std::cout << "Multiplication: " << multiplication << '\n';
}