#include <iostream>
using namespace std;

int main(){
    int total, buy, price, cnt;
    cin >> total >> buy;
    int sum = 0;
    
    while(buy--){
        cin >> price >> cnt;
        sum += (price*cnt);
    }
    
    if(total == sum) cout << "Yes";
    else cout << "No";
    
    return 0;
}