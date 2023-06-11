/* DATE: 2023.05.29
   NO: 2745
   TITLE: 진법 변환 */

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화 해제

    int b;
    int res = 0;
    string n;
    cin >> n >> b;

    for (int i = 0; i < n.length(); i++) {
        if ('0' <= n[i] && n[i] <= '9') res = res * b + (n[i] - '0');
        else res = res * b + (n[i] - 'A' + 10);
    }

    cout << res;
    return 0;
}
