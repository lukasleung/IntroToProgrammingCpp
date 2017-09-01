#include <iostream>
#include "math.h"

int main() {
    int x = 12;
    int y = 4;
    std::cout << "Sum  = " << sum(x,y) << std::endl;
    std::cout << "Diff = " << subtract(x,y) << std::endl;
    std::cout << "Prod = " << product(x,y)  << std::endl;
    return 0;
}
