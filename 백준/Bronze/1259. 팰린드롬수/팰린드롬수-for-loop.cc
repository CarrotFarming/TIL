#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    string num;
    while(true){
        bool palindrome = 1;
        cin >> num;
        if(num == "0") break;

        for(int i=0; i<=num.length()/2; i++){
            if(num[i] != num[num.length()-1-i]){
                palindrome = 0;
                break;
            }
        }
        if(palindrome) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
