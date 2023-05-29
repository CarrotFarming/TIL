#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    int b, tmp;
    int res = 0;
    string n;
    cin >> n >> b;

    for(int i=0; i<n.length(); i++){
        if('0' <= n[i] && n[i] <= '9') tmp = n[i] - '0';
        else tmp = n[i] - 'A' + 10;
        res += tmp * pow(b, n.length() - i - 1);
    }
    
    cout << res;
    return 0;
}
