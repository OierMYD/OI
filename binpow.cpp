#include <iostream>

using namespace std;

// �����ݺ���
long long fastPower(long long base, long long exponent) {
    long long result = 1;

    while (exponent > 0) {
        // ���ָ�����������򽫽�����Ե�ǰ�ĵ���
        if (exponent & 1) {
            result = (result * base);
        }

        // �������Գˣ�ָ������
        base = (base * base);
        exponent >>= 1; // ����һλ�൱�ڳ��� 2
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
