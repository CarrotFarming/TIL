#include <iostream>
using namespace std;

int turn(int n);

int main(){
    int n;
    cin >> n;
    
    if(turn(n) % 2 == 0) cout << "CY";
    else cout << "SK";
    
    return 0;
}

int turn(int n){
    if(n!=1) return turn(n-1)+1;
    else return 1;
}