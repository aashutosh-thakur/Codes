//Problem Statement 3
// You are tasked with developing a student management system for a school.The system should allow users to perform various operations such as adding new students, updating student information, deleting student records, and displaying student details.Each student record should contain the student's name, roll number, and marks obtained in different subjects. The system should also calculate the percentage of each student based on their marks. Additionally, the system should keep track of the total number of student records stored in the system. Implement the system using object-oriented programming concepts in C++.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    int marks[3];
    static int totalStudents;
public:
    Student(string n = "", int roll = 0) {
        totalStudents++;
    }
    void setData(string n, int roll, int m1, int m2, int m3) {
        name = n;
        rollNumber = roll;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void displayData() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks[0] << " " << marks[1] << " " << marks[2] << endl;
    }
    float calculatePercentage() const {
        int totalMarks = marks[0] + marks[1] + marks[2];
        return (static_cast<float>(totalMarks) / (3 * 100.0)) * 100.0;
    }
    static int getTotalStudents() {
        return totalStudents;
    }
    ~Student() {
        totalStudents--;
    }
};
int Student::totalStudents = 0;
void addStudent(Student students[], int& index, int maxSize) {
    if (index < maxSize) {
        string name;
        int roll, m1, m2, m3;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks in three subjects: ";
        cin >> m1 >> m2 >> m3;
        students[index++].setData(name, roll, m1, m2, m3);
        cout << "Student added successfully!" << endl;
    } else {
        cout << "Cannot add more students. Student database is full." << endl;
    }
}
void displayStudents(const Student students[], int index) {
    if (index == 0) {
        cout << "No student records found!" << endl;
    } else {
        cout << "Student Records:" << endl;
        for (int i = 0; i < index; ++i) {
            students[i].displayData();
            cout << "Percentage: " << students[i].calculatePercentage() << "%" << endl;
        }
    }
}
int main() {
    const int maxSize = 100;
    Student students[maxSize];
    int index = 0;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, index, maxSize);
                break;
            case 2:
                displayStudents(students, index);
                break;
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
