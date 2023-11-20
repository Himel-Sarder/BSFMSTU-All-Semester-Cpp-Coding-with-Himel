#include <iostream>

using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int year = days / 365;  // Calculate years
    int week = (days % 365) / 7;  // Calculate weeks
    int day = (days % 365) % 7;  // Calculate remaining days
    cout << year << " Years " << week << " Weeks " << day << " Days " << endl;
    
    return 0;
}
