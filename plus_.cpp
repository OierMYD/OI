#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    int carry = 0;
    string result = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result += to_string(sum % 10);
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    string sum = addStrings(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

