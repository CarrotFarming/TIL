#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int max, tmp;
    cin >> a >> b >> c;
  
    // 모두 같은 눈이 나온 경우
    if(a == b && b == c && a == c)
        cout << 10000 + a*1000;
    
    // 모두 다른 눈이 나온 경우
    else if(a != b && b != c && a != c){
        max = a; // default: a > b > c
        if(a < b){
            if(b < c) max = c; // a < b < c
            else max = b; // a < b, b > c
        }else if(a < c) max = c; // a > b, a < c
        cout << max*100;
    }
   
    // 같은 눈이 2개 나온 경우
    else{
        if(a == b || a == c) tmp = a;
        else tmp = b;
        cout << 1000 + tmp*100;
    }
    return 0;
}
