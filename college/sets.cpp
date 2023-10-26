#include <iostream>
using namespace std;

class SubjectLikes {
private:
    int mathOnly;
    int scienceOnly;
    int eitherMathOrScience;

public:
    // Constructor
    SubjectLikes(int totalStudents, int mathStudents, int scienceStudents, int bothSubjects) {
        mathOnly = mathStudents - bothSubjects;
        scienceOnly = scienceStudents - bothSubjects;
        eitherMathOrScience = totalStudents - (mathOnly + scienceOnly + bothSubjects);
    }

    // Display results
    void displayResults() {
        cout << "Students who like Math only: " << mathOnly << endl;
        cout << "Students who like Science only: " << scienceOnly << endl;
        cout << "Students who like either Math or Science: " << eitherMathOrScience << endl;
    }
};

int main() {
    int totalStudents, mathStudents, scienceStudents, bothSubjects;

    cout << "Enter the total number of students: ";
    cin >> totalStudents;

    cout << "Enter the number of students who like Math: ";
    cin >> mathStudents;

    cout << "Enter the number of students who like Science: ";
    cin >> scienceStudents;

    cout << "Enter the number of students who like both Math and Science: ";
    cin >> bothSubjects;

    // Create an object of the SubjectLikes class
    SubjectLikes subjectLikes(totalStudents, mathStudents, scienceStudents, bothSubjects);

    // Display the results using the object
    subjectLikes.displayResults();

    return 0;
}
