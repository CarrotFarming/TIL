#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제
    
    int a, b, c;
    cin >> a >> b >> c;
    int product = a*b*c;
    int num[10] = {0};

    while(product>0){
        num[product%10]++;
        product /= 10;
    }

    for(int i=0; i<10; i++){
        cout << num[i] << '\n';
    }
    
    return 0;
}