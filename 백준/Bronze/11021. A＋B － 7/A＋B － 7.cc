#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int t, a, b;
    cin >> t;
    
    for(int i=1; i<=t; i++){
        cin >> a >> b;
        cout << "Case #" << i <<": " << a+b << "\n";
    }
    
    return 0;
}