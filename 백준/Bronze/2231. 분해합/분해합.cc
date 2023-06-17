#include <iostream>
using namespace std;

int decompositionSum(int n);

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int n;
    cin >> n;
    int m = 1;
    bool print = 0;

    while(m < n){
        if(n == decompositionSum(m)){
            print = 1;
            cout << m;
            break;
        } else m++;
    }
    if(!print) cout << 0;
    return 0;
}

int decompositionSum(int n){
    int sum = n;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
