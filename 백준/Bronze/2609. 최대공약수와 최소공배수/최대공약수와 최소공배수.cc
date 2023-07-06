#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    cin >> a >> b;
    int tmpA = a;
    int tmpB = b;
	
    int GCD, LCM;
    while(true){
        r = a%b;
        if(r == 0){
            GCD = b;
            break;
        }
        a = b;
        b = r;
    }
    LCM = tmpA*tmpB / GCD;

    cout << GCD << '\n' << LCM;
    return 0;
}
