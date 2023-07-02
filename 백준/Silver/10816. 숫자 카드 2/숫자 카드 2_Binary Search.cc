#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int n, m, card;
    array<int, 500001> cardSet;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> card;
        cardSet[i] = card;
    }
    
    sort(cardSet.begin(), cardSet.begin()+n); // 이진탐색을 위해 정렬
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> card;
		cout << upper_bound(cardSet.begin(), cardSet.begin()+n, card) - lower_bound(cardSet.begin(), cardSet.begin()+n, card)<< ' ';
    }

    return 0;
}
