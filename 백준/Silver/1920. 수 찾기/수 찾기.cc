#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int len, int m, int arr[]);

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
        cout << binarySearch(n, tmp, arr) << ' ';
    }
    return 0;
}

int binarySearch(int len, int m, int arr[]){
    int start = 0;
    int last = len-1;
    int midIdx;

    while(start <= last){
        midIdx = (start + last) / 2;
        if(m == arr[midIdx]) return 1;
        else if(m < arr[midIdx]) last = midIdx-1;
        else start = midIdx+1;
    }
    return 0;
}