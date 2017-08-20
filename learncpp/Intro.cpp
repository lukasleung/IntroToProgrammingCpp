#include <iostream>

void printStatement() {
    std::cout << "Inside Function." << std::endl;
}

int getInputFromUser() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

int sum(int x, int y) {
    return x + y;
}

int product(int x, int y) {
    return x * y;
}

int main() {
    std::cout << "Begin Main" << std::endl;
    printStatement();

    int x,y;
    x = getInputFromUser();
    y = getInputFromUser();

    std::cout << "User has inputed values: " << x << " and " << y << std::endl;
    std::cout << "Sum = " << sum(x,y) << std::endl;
    std::cout << "Product = " << product(x,y) << std::endl;

    std::cout << "End Main" << std::endl;
    return 0;
}
