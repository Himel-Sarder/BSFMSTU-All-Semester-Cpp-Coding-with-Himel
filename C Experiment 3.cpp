#include<bits/stdc++.h>

using namespace std;

int main(){
    int marks1, marks2, marks3;
    cout << "Enter mark of Bangla: ";
    cin >> marks1;
    cout << "Enter mark of English: ";
    cin >> marks2;
    cout << "Enter mark of Math: ";
    cin >> marks3;

    int percentage = (marks1 + marks2 + marks3) / 3;

    string grade;
    switch (percentage) {
        case 80 ... 100:
            grade = "A+";
            break;
        case 70 ... 79:
            grade = "A";
            break;
        case 60 ... 69:
            grade = "A-";
            break;
        case 50 ... 59:
            grade = "B";
            break;
        case 40 ... 49:
            grade = "C";
            break;
        case 33 ... 39:
            grade = "D";
            break;
        default:
            grade = "Fail";
    }

    cout << "Grade: " << grade << endl;

    return 0;
}