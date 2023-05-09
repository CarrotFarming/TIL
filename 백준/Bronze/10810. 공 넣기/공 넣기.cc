#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, m;
    cin >> n >> m;

    int basket[n+1] = {0};
    int a, b, k;

    while(m--){
        cin >> a >> b >> k;
        for(int i=a; i<=b; i++){
            basket[i] = k;
        }
    }

    for(int i=1; i<n+1; i++){
        cout << basket[i] << ' ';
    }

    return 0;
}