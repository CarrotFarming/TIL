#include <iostream>
using namespace std;

int main(){    
    bool remainder[42] = {0}; // 42로 나눈 나머지는 0~41까지 존재
    int num;
    int cnt = 0;

    while(cin >> num){
        remainder[num%42] = 1;
    }

    for(int i=0; i<42; i++){
        if(remainder[i] == 1) cnt++;
    }
    
    cout << cnt;
    return 0;
}