#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n = 0;
    while(1){
        cin >> n;
        if(n == -1) break;

        vector<int> factor;
        int perfect = 0;
        for(int i=1; i<n; i++){
            if(n%i == 0){
                factor.push_back(i);
                perfect += i;
            }
        }

        if(perfect == n){
            cout << n << " = ";
            for(int i=0; i < factor.size()-1; i++){
                cout << factor[i] << " + ";
            }
            cout << factor[factor.size()-1] << '\n';
        } else cout << n << " is NOT perfect." << '\n';
    }
    return 0;
}