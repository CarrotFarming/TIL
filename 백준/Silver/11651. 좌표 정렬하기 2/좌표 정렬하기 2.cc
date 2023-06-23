#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, x, y;
    cin >> n;
    vector<pair<int, int>> dots;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        dots.push_back(make_pair(y, x));
    }

    sort(dots.begin(), dots.end());
    for(int i=0; i<n; i++){
        cout << dots[i].second << ' ' << dots[i].first << '\n';
    }
    return 0;
}