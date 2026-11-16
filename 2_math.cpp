#include <iostream>

int main() {
    int
        a = 10,
        b = 2;

    int res = a + b;

    std::cout 
        << a + b
            << "\n"
        << a - b
            << "\n"
        << a / b 
            << "\n"
        << a * b
            << "\n"
        << a % b
    << 
        std::endl;

    res += 10;
    res -= 3;
    res *= 2;
    res /= 100;
    res %= 2;

    int i = 0;

    i++;
    i--;
    // или
    ++i;
    --i;

    std::cout << "привет";
}