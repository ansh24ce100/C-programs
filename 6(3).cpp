#include <iostream>
using namespace std;

int* mergeSortedArrays(int* arr1, int size1, int* arr2, int size2, int& mergedSize) {
    mergedSize = size1 + size2;
    int* merged = new int[mergedSize];

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    return merged;
}

int main() {
    int size1, size2;

    cout << "Enter size of first sorted array: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "Enter elements of first sorted array:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> size2;
    int* arr2 = new int[size2];
    cout << "Enter elements of second sorted array:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedSize = 0;
    int* mergedArray = mergeSortedArrays(arr1, size1, arr2, size2, mergedSize);

    cout << "Merged Sorted Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

