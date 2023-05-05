#include <iostream>
using namespace std;

int main(){
  int num[3];
  int max, tmp;
  cin >> num[0] >> num[1] >> num[2];
    
  if(num[0] == num[1] && num[1] == num[2] && num[0] == num[2]) cout << 10000 + num[0]*1000;
  else if(num[0] != num[1] && num[1] != num[2] && num[0] != num[2]){
    max = num[0];
    for(int i=1; i<3; i++){
      if(max<num[i]) max = num[i];
    }
    cout << max*100;
  }
  else{
    if(num[0] == num[1] || num[0] == num[2]) tmp = num[0];
    else tmp = num[1];
    cout << 1000 + tmp*100;
  }

  return 0;
}