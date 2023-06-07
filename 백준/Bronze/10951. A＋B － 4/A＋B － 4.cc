#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int a, b;
    while(cin >> a >> b){ // 값이 들어오지 않으면 false
        cout << a+b << '\n';
    }
    
    return 0;
}