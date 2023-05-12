#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    bool submit[31] = {0}; // 제출 확인 배열 default: false
    int num;

    while(cin >> num){
        submit[num] = 1; // 제출한 학생 true
    }

    for(int i=1; i<31; i++){
        if(submit[i]==0) cout << i << '\n';
    }

    return 0;
}