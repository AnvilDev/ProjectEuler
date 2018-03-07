#include <iostream>

int main() {
    int fibA = 1, fibB = 1, sum = 0, temp;
    int FOUR_MILLION = 4000000;

    while (fibA <= FOUR_MILLION) {
        if ((fibA & 1) != 1) {
            sum += fibA;
        }
        temp = fibA;
        fibA += fibB;
        fibB = temp;
    }
    std::cout << sum << "\n";
}