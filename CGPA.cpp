#include <iostream>
#include <vector>
using namespace std;

// Function to calculate CGPA
double calculateCGPA(vector<double> &gradePoints, vector<int> &credits) {
    double totalGradePoints = 0.0;
    int totalCredits = 0;

    for (size_t i = 0; i < gradePoints.size(); ++i) {
        totalGradePoints += gradePoints[i] * credits[i];
        totalCredits += credits[i];
    }

    if (totalCredits == 0) return 0.0; // Avoid division by zero

    return totalGradePoints / totalCredits;
}

int main() {
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> gradePoints(numCourses);
    vector<int> credits(numCourses);

    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter grade points for course " << i + 1 << ": ";
        cin >> gradePoints[i];

        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits[i];
    }

    // Calculate CGPA
    double cgpa = calculateCGPA(gradePoints, credits);

    // Output the result
    cout << "Your CGPA is: " << cgpa << endl;

return 0;
}
