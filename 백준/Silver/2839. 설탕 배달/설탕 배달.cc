#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    bool done = 0;
    while(n >= 0){
        if(n%5 == 0){
            cnt += n/5;
            done = 1;
            break;
        }
        n -= 3;
        cnt++;
    }
    if(!done) cout << -1;
    else cout << cnt;
    return 0;
}