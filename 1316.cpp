/* DATE: 2023.05.25
   NO: 1316
   TITLE: �׷� �ܾ� üĿ*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // �� ǥ�� ����� ����ȭ ����

    int n;
    cin >> n;
    int cnt = 0;

    while (n--) {
        int alphabet[26] = {0};
        bool check = 1;
        string word;
        cin >> word;

        // �����ϴ� ���ĺ� üũ
        for (int i = 0; i < word.length(); i++) {
            alphabet[word[i] - 97]++;
        }

        // �׷� �ܾ� �˻�
        for (int i = 0; i < 26; i++) {

            // ����Ƚ�� 1ȸ������ �˻����� �ʾƵ� ��
            if (alphabet[i] == 0 || alphabet[i] == 1) continue;

            int first = word.find(i+97); // ù ��° ���� ��ġ
            for (int j = 1; j < alphabet[i]; j++) { // �ݺ� Ƚ���� ���� Ƚ��-1
                int next = word.find(i+97, first+1); // ���� ���� ��ġ
                if (next != first+1) { // ���� ��ġ�� ���ӵ��� �ʾ��� ���
                    check = 0;
                    break;
                }
                first = next; // �о�� ���� üũ ����
            }
            if (!check) break;
        }

        // �׷� �ܾ� ī��Ʈ
        if (check) cnt++;
    }

    cout << cnt;
    return 0;
}
