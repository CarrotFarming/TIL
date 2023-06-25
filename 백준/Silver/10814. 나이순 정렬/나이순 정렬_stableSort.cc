#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,string> p1, pair<int,string> p2);

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int n, age;
    string name;
    cin >> n;
    vector<pair<int, string>> list;
    for(int i=0; i<n; i++){
        cin >> age >> name;
        list.push_back(make_pair(age, name));
    }

    stable_sort(list.begin(), list.end(), compare);
    for(int i=0; i<n; i++){
        cout << list[i].first << ' ' << list[i].second << '\n';
    }
    return 0;
}

bool compare(pair<int,string> p1, pair<int,string> p2)
{
    return p1.first < p2.first;
}
