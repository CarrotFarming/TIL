#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int n, b;
    string res;
    cin >> n >> b;

    while(n > 0){
        int tmp = n % b;
        if(0 <= tmp && tmp <= 9) res += (tmp+'0');
        else res += (tmp-10 + 'A');
        n /= b;
    }
    
    for(int i=res.length()-1; i>=0; --i){
        cout << res[i];
    }
    return 0;
}