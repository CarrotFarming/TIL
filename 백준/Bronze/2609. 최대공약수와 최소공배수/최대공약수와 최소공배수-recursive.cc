#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    int a, b, r;
    cin >> a >> b;

    int GCD = gcd(a, b);
    int LCM = a*b / GCD;

    cout << GCD << '\n' << LCM;
    return 0;
}

int gcd(int a, int b){
    if(b == 0) 
        return a;
        
    return gcd(b, a%b);
}
