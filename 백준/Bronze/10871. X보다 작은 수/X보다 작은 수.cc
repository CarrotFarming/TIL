#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, x;
    cin >> n >> x;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < x) cout << a[i] << ' ';
    }

    return 0;
}