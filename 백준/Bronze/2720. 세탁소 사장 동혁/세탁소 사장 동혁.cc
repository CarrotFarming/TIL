#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int c;
        cin >> c;

        int quarter = c / 25;
        c %= 25;

        int dime = c / 10;
        c %= 10;

        int nickel = c / 5;
        c %= 5;

        int penny = c;

        cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
    }

    return 0;
}
