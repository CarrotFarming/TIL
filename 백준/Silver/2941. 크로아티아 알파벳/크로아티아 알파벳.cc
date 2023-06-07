#include <iostream>
#include <string>
using namespace std;

int count(string str){
    string alphabet[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for(int i=0; i<8; i++){
        while(1){
            if(str.find(alphabet[i]) != -1){
                str.replace(str.find(alphabet[i]), alphabet[i].length(), "#");
            }else break;
        }
    }
    return str.length();
}

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    string s;
    cin >> s;    
    cout << count(s);
    return 0;
}