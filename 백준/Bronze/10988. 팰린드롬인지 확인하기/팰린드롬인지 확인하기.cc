#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    bool check = 1;
    string str;
    cin >> str;
    int len = str.length();

    for(int i=0; i <len/2; i++){
        if(str[i] != str[len-1-i]) {
            check = 0;
            break;
        }
    }

    if(check) cout << '1';
    else cout << '0';

    return 0;
}