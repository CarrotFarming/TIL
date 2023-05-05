#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int max, tmp;
    cin >> a >> b >> c;
  
    if(a == b && b == c && a == c) cout << 10000 + a*1000;
    else if(a != b && b != c && a != c){
        max = a;
        if(a < b){
            if(b < c) max = c;
            else max = b;
        }else if(a < c) max = c;
        cout << max*100;
    }else{
        if(a == b || a == c) tmp = a;
        else tmp = b;
        cout << 1000 + tmp*100;
    }
    return 0;
}