#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point* moveX(int dx) {
        x = x + dx;
        return this;
    }

    Point* moveY(int dy) {
        y = y + dy;
        return this;
    }

    Point* moveXY(int dx, int dy) {
        x = x + dx;
        y = y + dy;
        return this;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point* p = new Point();

    int choice, dx, dy;

    while (true) {
        cout << "1. Move X\n2. Move Y\n3. Move X and Y\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to move in X: ";
            cin >> dx;
            p->moveX(dx);
        } else if (choice == 2) {
            cout << "Enter value to move in Y: ";
            cin >> dy;
            p->moveY(dy);
        } else if (choice == 3) {
            cout << "Enter value to move in X and Y: ";
            cin >> dx >> dy;
            p->moveXY(dx, dy);
        } else if (choice == 4) {
            p->display();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    delete p;

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}
