#include <iostream>
using namespace std;

int main(){
    bool submit[31] = {0}; // 제출 확인 배열 default: false
    int num;

    while(cin >> num){
        submit[num] = 1; // 제출한 학생 true
    }

    for(int i=1; i<31; i++){
        if(submit[i]==0) cout << i << '\n';
    }

    return 0;
}