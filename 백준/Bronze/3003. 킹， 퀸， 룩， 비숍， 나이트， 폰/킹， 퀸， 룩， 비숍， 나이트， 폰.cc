#include <iostream>
using namespace std;

int main(){    
    int find[6] = {0};
    int piece[6] = {1, 1, 2, 2, 2, 8};

    for(int i=0; i<6; i++){
        cin >> find[i];
        cout << piece[i] - find[i] << ' ';
    }

    return 0;
}