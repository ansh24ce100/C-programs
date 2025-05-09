#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
    int capacity;

public:
    DynamicArray() {
        capacity = 2;
        size = 0;
        data = new int[capacity];
    }

    void insert(int value) {
        if (size == capacity) {
            int* temp = new int[capacity * 2];
            for (int i = 0; i < size; i++) {
                temp[i] = data[i];
            }
            delete[] data;
            data = temp;
            capacity = capacity * 2;
        }
        data[size] = value;
        size++;
    }

    void remove(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position" << endl;
            return;
        }
        for (int i = position; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr;
    int choice, value, pos;

    while (true) {
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to insert: ";
            cin >> value;
            arr.insert(value);
        } else if (choice == 2) {
            cout << "Enter position to delete: ";
            cin >> pos;
            arr.remove(pos);
        } else if (choice == 3) {
            arr.display();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}
