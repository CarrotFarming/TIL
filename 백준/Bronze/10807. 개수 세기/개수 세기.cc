#include <iostream>
using namespace std;

int main(){
    int n, v;
    int cnt = 0;
    cin >> n;

    int num[n];
    for(int i=0; i<n; i++){ // 배열에 정수 넣기
        cin >> num[i];
    }
    
    cin >> v;
    for(int i=0; i<n; i++){ // 배열에서 입력된 v와 같은 값 찾기
        if(v == num[i]) cnt++;
    }

    cout << cnt;
    
    return 0;
}