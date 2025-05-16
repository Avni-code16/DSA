// Removing element at nth position
#include <iostream>
#include <vector>
using namespace std;

int Linear_Search(const vector<int>& array, int x) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == x) {
            cout << "This element exists in array" << endl;
            return i;
        }
    }
    cout << "Element not found in array" << endl;
    return -1;
}

void Remove_Element( vector<int>& array, int x){ // passed by reference
    int index = Linear_Search(array,x);
    if(index == -1){
        cout << "No such element found. Removal not done" << endl;
        return;
    }
    for(int i = index +1; i<array.size(); i++){
        array[i-1] = array[i];
    }
    array.pop_back(); // decrease the size of vector
    cout << "Element successfuly removed!"<< endl;
}

void Print_Array(const vector<int>& array) {
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> array;
    int n,target;

    cout << "Enter the number of elements in array : " << endl;
    cin >> n;

    array.resize(n);

    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> array[i];
    }

    cout << "Enter the element you want to remove : " <<endl;
    cin >> target;

    Remove_Element(array,target);

    cout << "Array after removal of  " << target << " " << endl;
    Print_Array(array);
    
    return 0;
}