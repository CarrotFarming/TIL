#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int n, m;
    cin >> n >> m;
    int matrixA[n][m];
    int matrixB[n][m];

    // 행렬 구성
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrixA[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrixB[i][j];
        }
    }

    // 행렬 덧셈
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrixA[i][j] + matrixB[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}