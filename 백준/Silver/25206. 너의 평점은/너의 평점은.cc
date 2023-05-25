#include <iostream>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);	// 두 표준 입출력 동기화 해제

    map<string, double> gradeTable;
    gradeTable["A+"] = 4.5;
    gradeTable["A0"] = 4.0;
    gradeTable["B+"] = 3.5;
    gradeTable["B0"] = 3.0;
    gradeTable["C+"] = 2.5;
    gradeTable["C0"] = 2.0;
    gradeTable["D+"] = 1.5;
    gradeTable["D0"] = 1.0;
    gradeTable["F"] = 0.0;

    string subject;
    double sum = 0;
    double credit;
    double creditSum = 0;
    string grade;

    for(int i=0; i<20; i++){
        cin >> subject >> credit >> grade;
        if(grade != "P"){
            creditSum += credit;
            sum += credit * gradeTable[grade];
        }
    }
    
    cout.precision(6);
    cout.fixed;
    cout << sum/creditSum;
    
    return 0;
}