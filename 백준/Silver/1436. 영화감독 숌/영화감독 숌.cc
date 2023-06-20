#include <iostream>
using namespace std;

bool checkSixNum(int n);

int main(){
    int n;
    cin >> n;
    int numbering = 666;
    int series = 1;
    bool numCheck;

    if(n == 1) cout << numbering;
    else{
        while(series < n){
            numbering++;
            numCheck = checkSixNum(numbering);
            if(numCheck) series++;
        }
        cout << numbering;
    }
    return 0;
}

// 세개 이상만 연속되면 됨
bool checkSixNum(int n) {
    int cnt = 0;
    while (n > 0) {
        if (n%10 == 6) {
            cnt++;
            if (cnt == 3) return true;
        } else cnt = 0;
        n /= 10;
    }
    return false;
}