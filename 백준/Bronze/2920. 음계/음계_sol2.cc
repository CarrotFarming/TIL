#include <iostream>
using namespace std;

int main(){ 
    int num[8];
    int asc = 0;
    int desc = 0;

    for(int i=0; i<8; i++){
        cin >> num[i];
        if(num[i] == i+1) asc++;
        else if(num[i] == 8-i) desc++;
    }
    if(asc == 8) cout << "ascending";
    else if(desc == 8) cout << "descending";
    else cout << "mixed";

    return 0;
}
