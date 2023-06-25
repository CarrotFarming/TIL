#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    int testCase, h, w, n;
    cin >> testCase;
    while(testCase--){
        cin >> h >> w >> n;
        int num = 1;
        while(n > h){
            n -= h;
            num++;
        }
        cout << n*100 + num << '\n';
    }
    return 0;
}