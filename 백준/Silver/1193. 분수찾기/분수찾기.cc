#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    int line = 1;
    int a, b; // a: 분자, b: 분모
    int x;
    cin >> x;

    // X가 위치한 대각선 찾기
    while(x > line){
        x -= line;
        line++;
    }

    if(line % 2){ // 대각선 홀수일 때
        a = line + 1 - x;
        b = x;
    }else{ // 대각선 짝수일 때
        a = x;
        b = line + 1 - x;
    }
    
    cout << a << '/' << b;
    return 0;
}
