#include <iostream>
using namespace std;

int main(){
    int n, m; // n개의 바구니, m번 순서 변경
    int a, b; // a번째 바구니부터 b번째 바구니의 순서를 역순으로 변경
    
    cin >> n >> m;
    int basket[n+1];
    for(int i=1; i<n+1; i++){
        basket[i] = i;
    }

    while(m--){
        cin >> a >> b;
        if(a != b){
            for(int i=0; i <= (b-a)/2; i++) {
                swap(basket[a+i], basket[b-i]);
            }
        }
    }

    for(int i=1; i<n+1; i++){
        cout << basket[i] << ' ';
    }

    return 0;
}