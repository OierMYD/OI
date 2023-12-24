#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 高精度减法函数
string subtractStrings(string num1, string num2) {
    string result = "";
    int borrow = 0;

    while (num1.length() < num2.length()) {
        num1 = '0' + num1;
    }

    while (num2.length() < num1.length()) {
        num2 = '0' + num2;
    }

    int len = num1.length();

    for (int i = len - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0' - borrow;
        int digit2 = num2[i] - '0';

        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result += to_string(digit1 - digit2);
    }

    reverse(result.begin(), result.end());

    // 删除前导零
    int start = 0;
    while (start < result.length() - 1 && result[start] == '0') {
        start++;
    }

    return result.substr(start);
}

int main() {
    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    string difference = subtractStrings(num1, num2);
    cout << "Difference of " << num1 << " and " << num2 << " is: " << difference << endl;

    return 0;
}

