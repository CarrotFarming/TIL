#include <iostream>
using namespace std;

int factorial(int n);

int main(){
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
