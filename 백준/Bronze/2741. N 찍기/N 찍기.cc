#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    int n;
    cin >> n;
    for(int i=1; i <= n; i++){
        cout << i << '\n';
    }
    return 0;
}