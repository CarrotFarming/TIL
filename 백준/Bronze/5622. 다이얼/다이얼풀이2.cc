#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int sum = 0;
    string call;
    cin >> call;
  
    for(int i=0; i<call.length(); i++){
        sum += time[call[i] - 'A'];
    }

    cout << sum;
    
    return 0;
}
