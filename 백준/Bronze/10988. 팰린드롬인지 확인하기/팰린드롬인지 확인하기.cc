#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int len = s.length();
    for(int i=0; i < len/2; i++){
        if(s[i] != s[len-1-i]) {
            return 0;
        }       
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);   // 두 표준 입출력 동기화 해제

    string str;
    cin >> str;
    cout << isPalindrome(str);

    return 0;
}