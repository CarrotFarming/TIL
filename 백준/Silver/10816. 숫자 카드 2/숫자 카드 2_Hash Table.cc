#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    unordered_map<int, int> cardSet;
    int n, m, card;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> card;
        cardSet[card]++;
    }

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> card;
        cout << cardSet[card] << ' ';
    } 
    return 0;
}
