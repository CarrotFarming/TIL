#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);    // 두 표준 입출력 동기화 해제 
    cin.tie(NULL);    // 입력과 출력 묶음을 풀기
    
    int testCase, n, score;
    cin >> testCase;
    
    while(testCase--){
        cin >> n;
        int score[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> score[i];
            sum += score[i];
        }
        double average = sum/n;
        
        double cnt = 0;
        for(int i=0; i<n; i++){
            if(score[i] > average) cnt++;
        }
        
        cout.precision(3);
        cout << fixed;
        cout << cnt/(double)n * 100 << '%' << '\n';
    }
    return 0;
}