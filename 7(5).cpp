#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

ostream& currency(ostream& os) {
    os << "₹";
    return os;
}

struct Student {
    string name;
    int marks;
    double tuitionFee;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter name, marks and tuition fee for student " << (i + 1) << ": ";
        cin >> students[i].name >> students[i].marks >> students[i].tuitionFee;
    }

    cout << endl;
    cout << setw(20) << left << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Tuition Fee" << endl;

    cout << setfill('-') << setw(45) << "-" << setfill(' ') << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(20) << left << students[i].name
             << setw(10) << students[i].marks
             << currency << fixed << setprecision(2)
             << students[i].tuitionFee << endl;
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

