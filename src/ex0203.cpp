#include <iostream>
using namespace std;

int main () {
    double x, y;
    char c;

    do {
    cout << "Enter operation (*, -, +, /) or q to terminate: ";
    cin >> c;
    if (c == 'q') break;

    cout << "Enter x and y: "
    cin >> x >>;
    switch (c){
        case '+' << x + y << endl; break;
        case '*' << x * y << endl; break;
        case '/' << x / y << endl; break;
        case '-' << x - y << endl; break;

    }
    }while(c != 'q');
    return 0;
}