#include <iostream>
using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    
    if(m >= 45) cout << h << ' ' << m-45;
    else if(h == 0) cout << 23 << ' ' << 15+m;
    else cout << h-1 << ' ' << 15+m;
    
    return 0;
}