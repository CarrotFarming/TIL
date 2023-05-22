#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제 
    int alphabet[26] = {0};
    string s;
    
    cin >> s;
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s[i] < 91) alphabet[s[i] - 65]++; // 대문자 65-90
        else alphabet[s[i] - 97]++; // 소문자 97-122
    }

    int max = 0;
    int maxidx = 0;

    // 최대 카운트 값 탐색
    for(int i=0; i<26; i++){
        if(max < alphabet[i]) {
            max = alphabet[i];
            maxidx = i;
        }
    }

    // 최대 인덱스 개수 탐색 및 출력
    int cnt = 0;
    for(int i=0; i<26; i++){
        if(max == alphabet[i]) cnt++;
        if(cnt > 1) {
            cout << '?';
            break;
        }
    }
    if(cnt == 1) cout << (char) (maxidx+65);

    return 0;
}