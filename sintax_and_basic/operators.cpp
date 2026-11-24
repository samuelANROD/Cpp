#include <iostream>

int main() {
    // assignment operators
    int x = 5;
    // x += 5 (x + 5)
    // x -= 5 (x - 5)
    // x /= 5 (x / 5)
    // x *= 5 (x * 5)
    // x %= 5 (x % 5)
    // x &= 5 (x & 5)
    // x |= 5 (x | 5)
    // x ^= 5 (x ^ 5)
    // x >>= 5 (x >> 5) deslocamento de bits
    // x <<= 5 (x << 5) deslocamento de bits

    std::cout << "---------------------------" << std::endl;
    std::cout << x << std::endl;
        //---------------------------------------

    // comparison operators
    int a = 5;
    int b = 5;
    // a == b;
    // a != b;
    // a > b;
    // a < b;
    // a <= b;
    // a >= b;

    std::cout << "---------------------------" << std::endl;
    std::cout << (a == b) << std::endl;
    //---------------------------------------

    // logical operators
    int y = 5;
    // x > 3 && x < 10; AND
    // x > 3 || x < 10; OR
    // !(x > 3 && x < 10); NOT

    return 0;
}
