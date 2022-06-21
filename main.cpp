#include <iostream>

int max(int a, int b) {
    std::cerr << "max() called (a=" << a << ", b=" << b << ")" << std::endl;
    return a ? b < a : b;
}

int getInput() {
    std::cerr << "getInput() called" << std::endl;
    std::cout << "Type your value: ";
    int x;
    std::cin >> x;
    std::cerr << "getInput::x = " << x << std::endl;
    return x;
}

int main() {
    std::cerr << "main() called" << std::endl;

    int x = getInput();
    std::cerr << "main::x = " << x << std::endl;

    int y = getInput();
    std::cerr << "main::y = " << y << std::endl;

    int maxXY = max(x, y);
    std::cerr << "main::maxXY = " << maxXY << std::endl;

    return 0;
}
