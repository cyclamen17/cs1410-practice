#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
   string months[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

    int year;
    cout << "Enter current year: ";
    cin >> year;

    int days[] = {
    31, year % 4 == 0 ? 29 : 28,
    31, 30, 31, 30,
    31, 31, 30, 31,
    30, 31
};

    cout << setw(10) << "Month" << setw(12) << "# of days" << endl;

    for (int i = 0; i < 12; i++) {
        cout << setw(10) << months[i] << setw(12) << days[i] << endl;
    }

    return 0;
}