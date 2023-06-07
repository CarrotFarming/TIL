/* DATE: 2023.05.17
   NO: 1152
   TITLE: 단어의 개수 */

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int cnt = 1;
	string str;
    getline(cin, str);
    
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ') cnt++;
    }
    if(str[0] == ' ') cnt--;
    if(str[str.length()-1] == ' ') cnt--;

    cout << cnt;
    
    return 0;
}