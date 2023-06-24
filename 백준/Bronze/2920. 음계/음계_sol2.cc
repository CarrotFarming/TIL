#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
  cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int num[8];
    int asc = 0;
    int desc = 0;

    for(int i=0; i<8; i++){
        cin >> num[i];
        if(num[i] == i+1) asc++;
        else if(num[i] == 8-i) desc++;
    }
    if(asc == 8) cout << "ascending";
    else if(desc == 8) cout << "descending";
    else cout << "mixed";

    return 0;
}
