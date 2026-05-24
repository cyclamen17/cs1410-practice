#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a day: ";
    string day;

    if(day == "sun" || day == "sat") {
        cout << "That is the weekend." << endl;
    } else {
        cout << "That is a weekday."
    }
    return 0;
}