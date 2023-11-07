#include <iostream>
using namespace std;

bool turn(int n);

int main(){
    int n;
    cin >> n;
    
    if(turn(n)) cout << "SK";
    else cout << "CY";
    
    return 0;
}

bool turn(int n){
    if(n!=1) return !turn(n-1);
    else return 1;
}