#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

ostream& tab(ostream& os) {
    os << setw(15) << left;
    return os;
}

struct Student {
    string name;
    int marks;
    char grade;
};

int main() {
    ifstream file("students.txt");

    if (!file) {
        cout << "Error: Could not open the file." << endl;
        cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";
        return 1;
    }

    vector<Student> students;
    Student temp;

    while (file >> temp.name >> temp.marks >> temp.grade) {
        students.push_back(temp);
    }

    file.close();

    cout << tab << "Name" << tab << "Marks" << tab << "Grade" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < students.size(); i++) {
        cout << tab << students[i].name << tab << students[i].marks << tab << students[i].grade << endl;
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

