#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    string a, b;
    cin >> a >> b;
    swap(a[0], a[2]);
    swap(b[0], b[2]);

    if(a > b) cout << a;
    else cout << b;
    
    return 0;
}