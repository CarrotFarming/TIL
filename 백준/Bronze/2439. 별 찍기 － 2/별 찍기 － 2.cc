#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){ // 줄 개행
        
        for(int j=1; j<=n-i; j++){ // 공백 출력
            cout << ' ';
        }
        for(int j=1; j<=i; j++){ // 별 출력
            cout << '*';
        }
        
        cout << '\n';
    }
    
    return 0;
}