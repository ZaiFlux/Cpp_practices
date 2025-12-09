#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

void inputStudents(students[], int n);
void displayStudents(students[], int n);

int main() {

    int n;

    cout << "Enter the number of student you like: ";
    cin >> n;

    Student students[n];

    inputStudents(students, n);

    cout << "STUDENT LIST";
    displayStudents(student, n);

    return 0;
}

void inputStudents(student[], int n){
    for(int i = 0; i < n; i++){
        cout << "Enter student details " << i + 1 << "\n";
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Age: ";
        cin >> students[i].age;
        
        cout << "Grade: ";
        cin >> student[i].grade;
        cin.ignore();
    }
}