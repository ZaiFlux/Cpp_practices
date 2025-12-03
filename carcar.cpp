#include <iostream> 

using namespace std;

struct Student {
    string name;
};

void inputStudents(Student students[], int n){
    for(int i = 0; i < n; i++){
        cout << "Enter detail of student " << i + 1 << ": " << "\n";

        cout << "name: ";
        getline(cin, students[i].name);  
    }
}

void diSplayStudents(Student students[], int n){
    for(int i = 0; i < n; i++){
        cout << "Student list\n";
        cout << "NAME: " << students[i].name << "\n";
    }
}


int main() {

    int n;

    cout << "Enter how many students do you like: ";
    cin >> n;
    cin.ignore();

    Student students[n];

    inputStudents(students, n);
    diSplayStudents(students, n);
}
