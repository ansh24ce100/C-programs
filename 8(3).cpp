#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    int n;
    cout << "Enter number of transaction IDs: ";
    cin >> n;

    set<int> uniqueTransactionIDs;
    int id;

    cout << "Enter the transaction IDs: ";
    for (int i = 0; i < n; ++i) {
        cin >> id;
        uniqueTransactionIDs.insert(id);
    }

    cout << "\nUnique Transaction IDs in sorted order:" << endl;
    for (auto it = uniqueTransactionIDs.begin(); it != uniqueTransactionIDs.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\n\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

