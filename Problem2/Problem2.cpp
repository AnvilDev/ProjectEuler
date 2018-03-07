#include <iostream>

int main() {
    int fibA = 1, fibB = 1, temp, sum;
    int FOUR_MILLION = 4000000;

    while (fibA <= FOUR_MILLION) {
        if (fibA % 2 == 0) {
            sum += fibA;
        }
        temp = fibA;
        fibA += fibA + fibB;
        fibB = temp;
    }
    std::cout << sum << "\n";
}