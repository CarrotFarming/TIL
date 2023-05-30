#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int t, c;
    int coin[4] = {25, 10, 5, 1};
    cin >> t;

    while(t--){
        cin >> c;
        for(int i=0; i<4; i++){
            cout << c/coin[i] << ' ';
            c %= coin[i];
        }
        cout << '\n';
    }
    
    return 0;
}