#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    int a, b, r;
    cin >> a >> b;

    int GCD = gcd(a, b);
    int LCM = tmpA*tmpB / GCD;

    cout << GCD << '\n' << LCM;
    return 0;
}

int gcd(int a, int b){
    int r = a%b;
    while(r != 0){
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}
