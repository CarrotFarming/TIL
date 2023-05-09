/* DATE: 2023.05.10
   NO: 10818
   최소, 최대 by 기본 입출력 */

#include <iostream>
using namespace std;

int main(){
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