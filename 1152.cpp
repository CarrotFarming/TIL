/* DATE: 2023.05.17
   NO: 1152
   TITLE: �ܾ��� ���� */

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);	// �� ǥ�� ����� ����ȭ ����
	cin.tie(NULL);	// �Է°� ��� ������ Ǯ��
    
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