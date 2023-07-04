#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> set;
    for(int i=1; i<=n; i++){
        set.push(i);
    }

    while(set.size() != 1){
        set.pop();
        set.push(set.front());
        set.pop();
    }
    
    cout << set.front();
    return 0;
}