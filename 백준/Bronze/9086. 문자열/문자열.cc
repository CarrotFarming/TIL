#include <iostream>
using namespace std;

int main(){
    int t;
    string str;
    
    cin >> t;
    while(t--){
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }

    return 0;
}