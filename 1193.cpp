/* DATE: 2023.06.02
   NO: 1193
   TITLE: �м�ã�� */

#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// �� ǥ�� ����� ����ȭ ����

    int line = 1;
    int x;
    cin >> x;

    // X�� ��ġ�� �밢�� ã��
    while(x - line > 0){
        x -= line;
        line++;
    }

    // �밢�� Ȧ���� ��
    if(line % 2) cout << line + 1 - x << '/' << x;
    // �밢�� ¦���� ��
    else cout << x << '/' << line + 1 - x;
    
    return 0;
}