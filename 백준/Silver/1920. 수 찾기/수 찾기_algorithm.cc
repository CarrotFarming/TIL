#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int tmp;
        cin >> tmp;
        if(binary_search(arr, arr+n, tmp)) cout << 1 << ' ';
        else cout << 0 << ' ';
    }
    return 0;
}
