#include <iostream>
using namespace std;

int factorial(int n);

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int n, k;
    cin >> n >> k;

    int numerator, denominator;
    numerator = factorial(n);
    denominator = factorial(k) * factorial(n-k);

    cout << numerator / denominator;
    return 0;
}

int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}