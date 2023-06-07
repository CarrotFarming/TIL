#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int matrix[9][9];
    int max = 0;
    int maxidxI, maxidxJ;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] >= max){
                max = matrix[i][j];
                maxidxI = i+1;
                maxidxJ = j+1;
            }
        }
    }

    cout << max << '\n';
    cout << maxidxI << ' ' << maxidxJ;
    return 0;
}