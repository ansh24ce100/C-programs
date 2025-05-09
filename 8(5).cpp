#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;

    while (true) {
        cout << "\n1. Create Folder\n2. Add File to Folder\n3. Display Directory\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            string folder;
            cout << "Enter folder name: ";
            cin >> folder;
            directory[folder];
            cout << "Folder created.\n";
        } else if (choice == 2) {
            string folder, file;
            cout << "Enter folder name: ";
            cin >> folder;
            if (directory.find(folder) != directory.end()) {
                cout << "Enter file name: ";
                cin >> file;
                directory[folder].push_back(file);
                cout << "File added.\n";
            } else {
                cout << "Folder not found.\n";
            }
        } else if (choice == 3) {
            cout << "\nDirectory Structure:\n";
            for (auto it = directory.begin(); it != directory.end(); ++it) {
                cout << it->first << ":\n";
                for (int i = 0; i < it->second.size(); i++) {
                    cout << "  - " << it->second[i] << endl;
                }
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100" << endl;

    return

