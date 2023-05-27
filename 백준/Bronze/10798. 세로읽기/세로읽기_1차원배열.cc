#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    string matrix[5];
    for(int i=0; i<5; i++){
        cin >> matrix[i];
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(i < matrix[j].size()) cout << matrix[j][i];
        }
    }
    return 0;
}
