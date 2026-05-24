#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double Deg);

string findQuadrant(double Deg){
    double rad = 3.14 / 180;
    if(sin(rad) >= 0 && cos(rad) >= 0){
        return "Quadrant I";
    } else if(sin(rad) >= 0 && cos(rad) < 0){
        return "Quadrant II";
    } else if(sin(rad) < 0 && cos(rad) < 0){
        return "Quadrant III";
    } else if(sin(rad) < 0 && cos(rad) >= 0){
        return "Quadrant IV";
}
}

int main(){
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(123) << endl;
    cout << findQuadrant(223) << endl;
    cout << findQuadrant(323) << endl;

    return 0;
}