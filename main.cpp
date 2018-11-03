//Simple grading program by: Nicholas Horton
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int grade;
    
    cout << "Please enter your grade: (enter a number 0-100) " << endl;
    cout << "================================================" << endl;
    cin >> grade;
    
    if (grade == 100) {
        cout << "You got a perfect score!" << endl;
    }else if (grade < 100 && grade >90) {
        cout << "You got an A!" << endl;
    }else if (grade < 90 && grade >80) {
        cout << "You got a B!" << endl;
    }else if (grade < 80 && grade > 70) {
        cout << "You got a C" << endl;
    }else if (grade < 70 && grade > 60) {
        cout << "You got a D" << endl;
    }else if (grade < 60 && grade >= 0) {
        cout << "You failed with an F" << endl;
    }else {
        cout << "You did not enter a number that was 0-100." << endl;
    }
    return 0;
}
