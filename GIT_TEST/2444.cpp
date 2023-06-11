/* DATE: 2023.05.21
   NO: 2444
   TITLE: 별 찍기-7 */

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int n;
    cin >> n;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout << ' ';
        }
        for(int j=0; j<2*i+1; j++){
            cout << '*';
        }
        cout << '\n';
    }

    for(int i=n; i>0; i--){
        for(int j=n; j>i; j--){
            cout << ' ';
        }
        for(int j=0; j<2*i-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}
