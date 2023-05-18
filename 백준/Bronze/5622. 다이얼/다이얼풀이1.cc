#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int time = 0;
    string call;
    cin >> call;
    for(int i=0; i<call.length(); i++){
        if(65 <= call[i] && call[i] <= 67) time += 3;
        else if(68 <= call[i] && call[i] <= 70) time += 4;
        else if(71 <= call[i] && call[i] <= 73) time += 5;
        else if(74 <= call[i] && call[i] <= 76) time += 6;
        else if(77 <= call[i] && call[i] <= 79) time += 7;
        else if(80 <= call[i] && call[i] <= 83) time += 8;
        else if(84 <= call[i] && call[i] <= 86) time += 9;
        else time += 10;
    }

    cout << time;
    
    return 0;
}
