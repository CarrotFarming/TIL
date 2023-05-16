#include <iostream>
using namespace std;

int main(){
    int cnt = 1;
	string str;
    getline(cin, str);
    
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ') cnt++;
    }
    if(str[0] == ' ') cnt--;
    if(str[str.length()-1] == ' ') cnt--;

    cout << cnt;
    
    return 0;
}