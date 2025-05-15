#include <iostream>
#include <vector>
using namespace std;

int Largest(const vector<int>& array)
{
    if (array.size() <= 0) {  // Fixed: check if array is empty or invalid size
        return -1;  // Return an error code
    }
    
    //You return -1 when the array is empty or invalid size. 
    //That’s fine, but what if the actual max/min value is -1? Then you won’t know if it's valid or an error.

  // ✅ Better idea: Use exceptions or output parameters, but for simplicity (especially in learning), 
  // this is okay. Just make sure to document it.
   
    int max = array[0];
    for(int i = 1; i < array.size(); i++) {  // Start from 1 since we already have array[0]
        if(max < array[i]) {
            max = array[i];
        }
    }
    return max;
}
int Smallest(const vector<int>& array){
    if (array.size() <= 0) {  // Fixed: check if array is empty or invalid size
        return -1;  // Return an error code
    }
    int min = array[0];
    for(int i=1; i< array.size(); i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}

int main() {
     vector<int> array;
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;

    // Note: Variable-length arrays (VLA) like this are not standard C++
    // Consider using vector<int> array(n); instead
    array.resize(n);

    cout << "Enter each element in array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "The maximum element in array is: " << Largest(array) << endl;
     cout << "The minimum element in array is: " << Smallest(array) << endl;
    return 0;
}