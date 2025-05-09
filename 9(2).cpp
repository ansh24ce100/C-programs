#include <iostream>
#include <limits>

using namespace std;

int main() {
    double loanAmount, income;

    while (true) {
        cout << "Enter total loan amount: ";
        cin >> loanAmount;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
            continue;
        }

        cout << "Enter annual income: ";
        cin >> income;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
            continue;
        }

        if (income == 0) {
            cout << "Income cannot be zero. Please enter a valid income.\n";
            continue;
        }

        double ratio = loanAmount / income;
        cout << "Loan-to-Income Ratio: " << ratio << endl;
        break;
    }

    cout << "\nName: ANSH RABARI
