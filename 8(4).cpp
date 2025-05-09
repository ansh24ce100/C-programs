#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int score;
};

bool compareScores(const Student& a, const Student& b) {
    return a.score > b.score;
}

int main() {
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Student temp;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> temp.name;
        cout << "Enter score of student " << i + 1 << ": ";
        cin >> temp.score;
        students.push_back(temp);
    }

    sort(students.begin(), students.end(), compareScores);

    cout << "\nRanked Students List: \n";
    for (int i = 0; i < students.size(); i++) {
        cout << "Rank " << i + 1 << ": " << students[i].name << " with score " << students[i].score << endl;
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100" << endl;

    return 0;
}
