#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int input[502][502] = {}; // 정수 삼각형
    for(int i = 1; i < n+1; i++){ // line
        for(int j = 1; j < i+1; j++){ // index
            cin >> input[i][j];
        }
    }

    int D[502][502] = {}; // DP 테이블 생성 및 초기값 할당
    D[1][1] = input[1][1];

    for(int i = 2; i < n+1; i++){
        for(int j = 1; j < i+1; j++){
            D[i][j] = max(D[i-1][j-1], D[i-1][j]) + input[i][j];
        }
    }

    int res = D[n][1];
    for(int i = 2; i < n+1; i++){
        res = max(res, D[n][i]);
    }
    cout << res;

    return 0;
}
