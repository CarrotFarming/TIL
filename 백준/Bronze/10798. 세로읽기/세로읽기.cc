#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    string matrix[5][15];
    for(int i=0; i<5; i++){
        string s;
        getline(cin, s);
        for(int j=0; j<15; j++){
            if(j < s.length()) matrix[i][j] = s[j];
            else matrix[i][j] = " ";
        }
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(matrix[j][i] != " ") cout << matrix[j][i];
        }
    }
    return 0;
}