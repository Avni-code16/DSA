// Bubble sort
// Selection sort
// Insertion sort
// Merge Sort
// Quick Sort
// Heap Sort
// Shell Sort
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void BUBBLEsort( vector<int>& arr){ // ascending order
    int n = arr.size();
    if(arr.size() <= 0){
        cout << "Empty/Invalid array size!" << endl;
    }
    for(int i=0; i<n-1; i++){     
        bool swapped =false;       
                                  

    for(int j=0; j<n-1-i; j++){ // in bubble sort, the largest unsorted element is placed at the end at every pass.
        if(arr[j] > arr[j+1]){ // its already sorted
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swapped = true;
        }
    }
    // if no numbers were swapped in the inner loop
    if(!swapped){
        break; // it got sorted
    }
     
}
}

void print(const vector<int>& array){
 for(int num: array){
    cout<< num <<"  "; 
 }
 cout << endl;
}


int main(){
    vector<int> array;
    string line;

    cout<<"Please enter array: " << endl;
    getline(cin,line);

    stringstream ss(line);
    int num;

    while(ss>>num){
        array.push_back(num);
    }
    BUBBLEsort(array);

    cout << "Sorted array :  ";
    print(array);

    return 0;

}

