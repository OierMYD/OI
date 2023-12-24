#include <iostream>

using namespace std;

// 快速幂函数
long long fastPower(long long base, long long exponent) {
    long long result = 1;

    while (exponent > 0) {
        // 如果指数是奇数，则将结果乘以当前的底数
        if (exponent & 1) {
            result = (result * base);
        }

        // 将底数自乘，指数减半
        base = (base * base);
        exponent >>= 1; // 右移一位相当于除以 2
    }

    return result;
}

int main() {
    long long base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    long long result = fastPower(base, exponent);
    cout << "Result of " << base << "^" << exponent << " is: " << result << endl;

    return 0;
}
