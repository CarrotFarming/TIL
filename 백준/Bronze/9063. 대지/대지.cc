#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int minX = 10000, minY = 10000;
    int maxX = -10000, maxY = -10000;
    int a, b, n;
    cin >> n;

    while(n--){
        cin >> a >> b;
		if(a >= maxX) maxX = a;
		if(b >= maxY) maxY = b;
		if(a <= minX) minX = a;
		if(b <= minY) minY = b;
    }
    
    cout << (maxX - minX)*(maxY - minY);
    return 0;
}