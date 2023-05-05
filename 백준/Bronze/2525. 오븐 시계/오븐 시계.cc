#include <iostream>
using namespace std;

int main(){
    int h, m, time;
    int addH, addM;
    cin >> h >> m >> time;
    addH = 0;
  
    while(time>59){
        time -= 60;
        addH++;
    }
    addM = time;
    
    if(m+addM > 59){
        m = m+addM-60;
        addH++;
    }else m += addM;
    
    if(addH!=0){
        h += addH;
        if(h>23) h -= 24;
    }
    
    cout << h << ' ' << m;
    return 0;
}