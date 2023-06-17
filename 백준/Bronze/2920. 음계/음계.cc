#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int num;
    cin >> num;

    if(num == 1){
        for(int i=2; i<9; i++){
            cin >> num;
            if(i != num){
                cout << "mixed";
                break;
            }
            if(num == 8) cout << "ascending";
        }
    } else if(num == 8){
        for(int i=7; i>0; i--){
            cin >> num;
            if(i != num){
                cout << "mixed";
                break;
            }
            if(num == 1) cout << "descending";
        }
    } else cout << "mixed";
    return 0;
}