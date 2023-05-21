#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    bool check = 1;
    string str;
    cin >> str;
    int len = str.length();

    for(int i=0; i <len/2; i++){
        if(str[i] != str[len-1-i]) {
            check = 0;
            cout << '0';
            break;
        }
    }
    if(check) cout << '1';

    return 0;
}