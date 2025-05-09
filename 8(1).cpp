#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(const vector<int>& vec) {
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> data(n);
    cout << "Enter the sequence of numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    vector<int> reversed1 = data;
    reverse(reversed1.begin(), reversed1.end());

    cout << "\nReversed using std::reverse(): ";
    display(reversed1);

    vector<int> reversed2 = data;
    auto front = reversed2.begin();
    auto back = reversed2.end();
    back--;

    while (front < back) {
        iter_swap(front, back);
        front++;
        back--;
    }

    cout << "Reversed using iterators: ";
    display(reversed2);

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

