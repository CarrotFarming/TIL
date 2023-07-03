#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    string num;
    while(true){
        cin >> num;
        if(num == "0") break;

        string tmp = num;
        reverse(tmp.begin(), tmp.end());
        if(num == tmp) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
