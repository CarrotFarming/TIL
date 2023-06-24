#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n;
    cin >> n;
    cin.ignore(); // 개행 버퍼 비우기
    string str;
    
    while(n--){
        getline(cin, str);
        int scoreSum = 0;
        int score = 1;
        for(int i=0; i<str.length(); i++){
            if(str[i] == 'O') {
                scoreSum += score;
                score++;
            }else score = 1;
        }
        cout << scoreSum << '\n';
    }
    return 0;
}