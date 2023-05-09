#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int num[9];
    int max = 0;
    int maxIdx;

    for(int i=0; i<9; i++){
        cin >> num[i];
        if(max < num[i]){
            max = num[i];
            maxIdx = i+1;
        }
    }

    cout << max << '\n' << maxIdx;
    return 0;
}