#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    bool paper[100][100] = {0};
    int sum = 0;
    int n;
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        for(int i=y; i < y+10; i++){
            for(int j=x; j < x+10; j++){
                if(paper[i][j]) continue;
                paper[i][j] = 1;
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}