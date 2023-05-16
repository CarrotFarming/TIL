#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int t, r; // t: 테스트 케이스, r: 반복 횟수 (1 <= r <= 8)
    string s;

    cin >> t;
    while(t--){
        string p = "";
        cin >> r >> s;
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<r; j++){
                p += s[i];
            }
        }
        cout << p << '\n';
    }
    
    return 0;
}