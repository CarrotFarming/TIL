#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, tmp;
    cin >> n;
    int num[10001] = {0};
    for(int i=0; i<n; i++){
        cin >> tmp;
        num[tmp]++;
    }
    for(int i=1; i<10001; i++){
        for(int j=0; j<num[i]; j++){
            cout << i << '\n';
        }
    }
    return 0;
}