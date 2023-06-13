#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    while(1){
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
    
        if(arr[0] == 0 && arr[1] == 0 && arr[2] ==0) break;
        sort(arr, arr+3);
        
        if(arr[0]+arr[1] <= arr[2]) cout << "Invalid" << '\n';
        else{
            if(arr[0] == arr[2]) cout << "Equilateral" << '\n';
            else if(arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]) cout << "Scalene" << '\n';
            else cout << "Isosceles" << '\n';
        } 
    }
    return 0;
}