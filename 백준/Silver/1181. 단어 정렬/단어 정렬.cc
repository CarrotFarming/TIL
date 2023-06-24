#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sorting(pair<string, int> p1, pair<string, int> p2);

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
	cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int n, wordLen;
    string str;
    cin >> n;
    vector<pair<string, int>> words;

    for(int i=0; i<n; i++){
        cin >> str;
        wordLen = str.length();
        words.push_back(make_pair(str, wordLen));
    }
    
    sort(words.begin(), words.end(), sorting);
    words.erase(unique(words.begin(), words.end()), words.end());
    for(int i=0; i<words.size(); i++){
        cout << words[i].first << '\n';
    }
    
    return 0;
}

bool sorting(pair<string, int> p1, pair<string, int> p2){
    if(p1.second == p2.second) return p1.first < p2.first; // 길이 같으면 단어 오름차순
    else return p1.second < p2.second;
}