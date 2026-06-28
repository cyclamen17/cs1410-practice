#include <iostream>
using namespace std;

int main(){
    int bills[] {30, 40, 70};
    int* p = bills;

    cout << *p << ", " << *(p+1) << ", " << *(p+2) << endl;
    bills[2] = 300;
    *(p+2) + 100;

    int* dbills = new int[3] {30, 40, 70};
    cout << *dbills << ", " << *(dbills+1) << ", " << *(dbills+2) << endl; 
    cout << dbills[0] << ", " << dbills[1] << ", " << dbills[2] << endl;
    delete[] dbills;
    return 0;
}