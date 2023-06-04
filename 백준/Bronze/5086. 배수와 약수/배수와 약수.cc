#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL); // 입력과 출력 묶음을 풀기
    
    int a, b;
    while (1){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        
        if(b%a == 0) cout << "factor\n";
        else if(a%b == 0) cout << "multiple\n";
        else cout << "neither\n";
    }
    return 0;
}