#include <iostream>

int user_input() {
    std::cout << "Please enter an integer: ";
    int num {};
    std::cin >> num;
    return num;
}

int main() {
    int retrieved_int {user_input()};
    std::cout << "You eneterd " << retrieved_int << " !\n";
    return 0;
}