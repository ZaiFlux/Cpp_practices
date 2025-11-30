#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Holds Student info
struct Student
{
    int ID;
    string name;
    string course;
    string yearLevel;
};

// Global vector to store all Students
vector<Student> students;

// 1. Function to add a student.
void addStudent() 
{
    Student s;

    cout << "\nEnter your ID: ";
    cin >> s.ID;
    cin.ignore();

    cout << "Enter your Name: ";
    getline(cin, s.name);

    cout << "Enter your Course: ";
    getline(cin, s.course);

    cout << "Enter your Year Level: ";
    getline(cin, s.yearLevel);

    students.push_back(s);

    cout << "\nSuccessfully added!\n";
}

// 2. Function to VieW Student list.
void viewStudent()
{
    if(students.empty())
    {
        cout << "\nNo Student Available!";
        return;
    }

    cout << "\nSTUDENT LIST:\n" << "\n";
    for(const auto &s : students)
    {
        cout << "NAME: " << s.name << "\n";
        cout << "ID: " << s.ID << "\n";
        cout << "COURSE: " << s.course << "\n";
        cout << "YEAR LEVEL: " << s.yearLevel << "\n";
        cout << "-----------------------------------\n";
    }
}

// 3. Function for Searching Student.
void searchStudent()
{
    if(students.empty())
    {
        cout << "\nNo available Student!";
    }
    
    int searchID;
    cout << "Enter the ID to search the Student: ";
    cin >> searchID;

     bool found = false;

    for(const auto &s : students)
    {
        if(searchID == s.ID)
        {
           
            cout << "NAME: " << s.name << "\n";
            cout << "ID: " << s.ID << "\n";
            cout << "COURSE: " << s.course << "\n";
            cout << "Year Level: " << s.yearLevel << "\n";
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "STUDENT " << searchID << " Not Found!";
    }
}

// 4. Function for Updating Student Record.
void updateStudent()
{
    if(students.empty())
    {
        cout << "No Students Available!\n";
        return;
    }

    int searchID;
    cout << "Enter ID to Update Students Record:";
    cin >> searchID;

    for(auto &s : students)
    {
        if(searchID == s.ID)
        {
            cout << "STUDENT FOUND, ENTER NEW DETAILS";

            cout << "ENTER NEW NAME: ";
            getline(cin, s.name);

            cout << "ENTER NEW ID: ";
            cin >> s.ID;
    

            cout << "ENTER NEW COURSE: ";
            getline(cin, s.course);

            cout << "ENTER NEW YEAR LEVEL: ";
            getline(cin, s.yearLevel);

            cout << "YOU SUCCESFULLY UPDATE THE STUDENT RECORD!";
        }
    }
    cout << "Student " << searchID << " Not Found!";
}

// 5. Function in Deleting Student Record;
void deleteStudent()
{
    if(students.empty())
    {
        cout << "No Student Available!";
        return;
    }

    int searchID;
    cout << "Enter the ID to Delete the Student Record: ";
    cin >> searchID;

    for(size_t i = 0; i < students.size(); i++ )
    {
        if(students[i].ID == searchID)
        {
            students.erase(students.begin() + i);
            cout << "YOU SUCCESFULLY DELETE THE STUDENT FROM THE RECORD LIST!\n"; 
            return;
        }
    }
    cout << "STUDENT " << searchID << "Not Found";
}

int main ()
{
    int options;

    do
    {
        cout << "\t\t------------------------------------------------\n";
        cout << " \t\t  WELCOME TO STUDENT MANAGEMENT RECORD SYSTEM\n";
        cout << "\t\t------------------------------------------------\n";

        cout << "1. Add Student\n"
             << "2. View Student\n"
             << "3. Search Student\n" 
             << "4. Upadate Student Record\n" 
             << "5. Deleting Student Records\n"
             << "6. Exit\n" << "\n";

        cout << "Enter your choice: ";
        cin >> options;
        cin.ignore();

        switch(options)
        {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;  
            
            case 5:
                deleteStudent();
                break;    

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "INVALID CHOICE!\n";
        }

    } while(options != 6);
}
