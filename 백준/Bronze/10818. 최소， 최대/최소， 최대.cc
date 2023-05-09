/* DATE: 2023.05.10
   NO: 10818
   최소, 최대 */

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, max, min;
    cin >> n;

    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    max = min = num[0];
    for(int i=1; i<n; i++){
        if(max < num[i]) max = num[i];
        else if(min > num[i]) min = num[i];
    }

    cout << min << ' ' << max;
    return 0;
}