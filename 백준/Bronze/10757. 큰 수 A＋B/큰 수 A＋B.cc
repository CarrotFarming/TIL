#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBigNumbers(string num1, string num2) {
    string result;

    int maxLen = max(num1.length(), num2.length());
    num1 = string(maxLen - num1.length(), '0') + num1;
    num2 = string(maxLen - num2.length(), '0') + num2;

    int carry = 0;
    for (int i = maxLen - 1; i >= 0; i--) {
        int digitSum = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = digitSum / 10;
        result += to_string(digitSum % 10);
    }

    if (carry > 0) {
        result += to_string(carry);
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    string sum = addBigNumbers(num1, num2);
    cout << sum << endl;

    return 0;
}
