#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k; // 물품의 수 N(1 ≤ N ≤ 100), 준서가 버틸 수 있는 무게 K(1 ≤ K ≤ 100,000)
    cin >> n >> k;

    // 각 물건의 무게 W(1 ≤ W ≤ 100,000), 해당 물건의 가치 V(0 ≤ V ≤ 1,000)
    int w, v;
    vector<pair<int, int> > pack;
    for(int i=0; i<n; i++){
        cin >> w >> v;
        pack.push_back(make_pair(w, v));
    }

    // 2차원 DP 초기화
    vector<vector<int> > D(101, vector<int>(100001, 0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j < pack[i-1].first) D[i][j] = D[i-1][j]; // 가방에 짐을 넣을 수 없을 경우
            else D[i][j] = max(D[i-1][j], D[i-1][j-pack[i-1].first] + pack[i-1].second);
        }
    }
    
    cout << D[n][k];
    return 0;

}