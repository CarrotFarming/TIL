#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool sorting(tuple<int, int, string> &v1, tuple<int, int, string> &v2);

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기

    int n, age;
    string name;
    cin >> n;
    
    vector<tuple<int, int, string>> list;
    for(int i=0; i<n; i++){
        cin >> age >> name;
        list.push_back(make_tuple(i, age, name));
    }
    
    sort(list.begin(), list.end(), sorting);
    for(int i=0; i<n; i++){
        cout << get<1>(list[i]) << ' ' << get<2>(list[i]) << '\n';
    }
    return 0;
}

bool sorting(tuple<int, int, string> &v1, tuple<int, int, string> &v2){
    if(get<1>(v1) == get<1>(v2)) return get<0>(v1) < get<0>(v2);
    else return get<1>(v1) < get<1>(v2);
}
