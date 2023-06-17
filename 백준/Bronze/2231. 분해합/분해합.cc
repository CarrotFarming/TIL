#include <iostream>
using namespace std;

int decompositionSum(int n);

int main(){ 
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
