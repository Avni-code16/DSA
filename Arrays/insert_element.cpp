// inserting an element
// 12May

#include <iostream>
using namespace std;

const int Capacity = 5;
const int Logical_size = 4;

void insertion(int value, int position, int arr[5], int& size) {
    if (position < 0 || position > size) {
        cout << "Invalid position! Must be between 0 and " << size << "." << endl;
        return;
    }

    if (size >= Capacity) {
        cout << "Cannot insert — array is full!" << endl;
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    size++;
    cout << "Element inserted successfully!" << endl;
}

void display(int arr[5], int size) {
    cout << "Your array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[Capacity];
    int size = Logical_size;

    cout << "Please enter " << Logical_size << " integers:" << endl;
    for (int i = 0; i < Logical_size; i++) {
        cin >> arr[i];
    }

    display(arr, size);

    int ask;
    cout << "Do you want to add an element? Press 0 for yes and 1 for no: ";
    cin >> ask;

    if (ask == 0) {
        int value, position;
        cout << "Enter the value to insert: ";
        cin >> value;
        cout << "Enter the position (0 to " << size << "): ";
        cin >> position;

        insertion(value, position, arr, size);
        display(arr, size); // Now shows 5 elements
    } else {
        cout << "Final array: ";
        display(arr, size);
    }

    return 0;
}