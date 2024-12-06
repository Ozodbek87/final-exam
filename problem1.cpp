#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <=num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a positive integer between 2 and 10000: ";
    cin >> number;
    if (isPrime(number)) {
        std::cout << "Not Prime" << std::endl;
    } else {
        std::cout << "Prime" << std::endl;
    }

    return 0;
}

