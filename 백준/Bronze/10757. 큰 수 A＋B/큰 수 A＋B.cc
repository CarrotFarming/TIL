#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addNum(string a, string b);

int main() {
    /* ios_base::sync_with_stdio(false): 입출력 동기화가 해제되므로 입출력 성능이 향상
    대량의 입력 또는 출력 작업이 필요한 경우에 유용
    하지만 사용하는 메모리 버퍼 크기가 증가해 메모리 사용량이 늘어날 수 있음 (특히 대량의 입력을 처리할 때 큰 영향)
    > 따라서 코드 사용 시 성능은 향상되지만 메모리 사용량이 늘어날 수 있으므로 상황에 맞게 사용해야함
    > 해당 코드에서는 이 코드를 사용 시 2168KB의 메모리 사용, 사용하지 않을 때(2024KB)와 약간의 차이를 보임 */
    string a, b;
    cin >> a >> b;

    string sum = addNum(a, b);
    cout << sum;
    return 0;
}

string addNum(string a, string b) {
    string res;

    // 큰 수로 자릿수 맞추기
    int maxLen = max(a.length(), b.length());
    a = string(maxLen - a.length(), '0') + a;
    b = string(maxLen - b.length(), '0') + b;

    int carry = 0; // 올림
    for (int i = maxLen - 1; i >= 0; i--) {
        int digitSum = (a[i] - '0') + (b[i] - '0') + carry; // 각 자릿수 계산
        carry = digitSum / 10; // 올림 계산
        res += (digitSum % 10) + '0'; // 자리수를 결과에 더함
    }

    // 연산을 모두 마친 후에 올림 값이 남아있다면 올림 값을 결과에 더해줌
    if (carry > 0) res += carry + '0';

    // 결과를 뒤집어 출력하면 원하는 연산 결과를 얻을 수 있음
    reverse(res.begin(), res.end());

    return res;
}
