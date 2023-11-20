#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string Name;
    int SCD;
    float GPA;
    string Phone;
    string Address;

public:
    void input(){
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);

        cout << "Enter SCD: ";
        cin >> SCD;

        cout << "Enter GPA: ";
        cin >> GPA;

        cout << "Enter Phone: ";
        cin.ignore();
        getline(cin, Phone);

        cout << "Enter Address: ";
        getline(cin, Address);
    }
    void print() const {
        cout << "\nStudent Information:\n";
        cout << "Name: " << Name << "\nSCD: " << SCD << "\nGPA: " << GPA
             << "\nPhone: " << Phone << "\nAddress: " << Address << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of student : ";
    cin >> n;
    int numberOfStudents = n;
    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].input();
    }

    for (int i = 0; i < numberOfStudents; ++i) {
        students[i].print();
    }

    return 0;
}
