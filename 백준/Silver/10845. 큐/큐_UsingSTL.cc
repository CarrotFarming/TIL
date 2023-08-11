#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    cin.tie(NULL);	// 입력과 출력 묶음을 풀기
    
    int n, num;
    cin >> n;
    queue<int> q;
    
    while(n--){
        string s;
        cin >> s;
        
        if(s == "push"){
            cin >> num;
            q.push(num);
        }
        else if(s == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            cout << q.empty() << '\n';
        }
        else if(s == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if(s == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
        else cout << "error!\n";
    }
    
    return 0;
}
