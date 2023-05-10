#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    int basket[n+1];
    for(int i=1; i<n+1; i++){
        basket[i] = i;
    }

    while(m--){
        int a, b;
        int tmp = 0;
        cin >> a >> b;
        
        tmp = basket[a];
        basket[a] = basket[b];
        basket[b] = tmp;
    }

    // i번째 바구니부터 n번째 바구니까지 들어있는 공의 번호 출력
    for(int i=1; i<n+1; i++){
        cout << basket[i] << ' ';
    }

    return 0;
}