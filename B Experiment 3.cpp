#include <iostream>

using namespace std;

// Function to calculate SGPA
float calculateSGPA(int numCourses, int creditHours[], float gradePoints[]) {
    int totalCreditHours = 0;
    float weightedSum = 0.0;

    for (int i = 0; i < numCourses; ++i) {
        totalCreditHours += creditHours[i];
        weightedSum += creditHours[i] * gradePoints[i];
    }

    return weightedSum / totalCreditHours;
}

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    int creditHours[numCourses];
    float gradePoints[numCourses];

    // Input credit hours and grade points for each course
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter credit hours for Course " << i + 1 << ": ";
        cin >> creditHours[i];
        cout << "Enter grade points for Course " << i + 1 << ": ";
        cin >> gradePoints[i];
    }

    // Calculate SGPA
    float sgpa = calculateSGPA(numCourses, creditHours, gradePoints);

    // Output SGPA
    cout << "SGPA: " << sgpa << endl;

    return 0;
}
