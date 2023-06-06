/* DATE: 2023.05.25
   NO: 1316
   TITLE: 그룹 단어 체커*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화 해제

    int n;
    cin >> n;
    int cnt = 0;

    while (n--) {
        int alphabet[26] = {0};
        bool check = 1;
        string word;
        cin >> word;

        // 등장하는 알파벳 체크
        for (int i = 0; i < word.length(); i++) {
            alphabet[word[i] - 97]++;
        }

        // 그룹 단어 검사
        for (int i = 0; i < 26; i++) {

            // 등장횟수 1회까지는 검사하지 않아도 됨
            if (alphabet[i] == 0 || alphabet[i] == 1) continue;

            int first = word.find(i+97); // 첫 번째 등장 위치
            for (int j = 1; j < alphabet[i]; j++) { // 반복 횟수는 등장 횟수-1
                int next = word.find(i+97, first+1); // 다음 등장 위치
                if (next != first+1) { // 등장 위치가 연속되지 않았을 경우
                    check = 0;
                    break;
                }
                first = next; // 밀어내고 다음 체크 진행
            }
            if (!check) break;
        }

        // 그룹 단어 카운트
        if (check) cnt++;
    }

    cout << cnt;
    return 0;
}
