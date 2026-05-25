#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string name;
    int marks;

    // Program activity log
    clog << "Program started..." << endl;

    // Accept student details
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student marks: ";
    cin >> marks;

    clog << "Input received successfully." << endl;

    // Check for invalid marks
    if (marks < 0 || marks > 100) 
    {
        cerr << "Error: Invalid marks entered! Marks should be between 0 and 100." << endl;
    }
    else 
    {
        // Display student details
        cout << "\n--- Student Details ---" << endl;
        cout << "Name  : " << name << endl;
        cout << "Marks : " << marks << endl;
    }

    clog << "Program finished." << endl;

    return 0;
}