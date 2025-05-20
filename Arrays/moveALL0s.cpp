// Move all 0s to the end of array 
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
// two pointer
// read and "adjust"
vector<int> Move0s( vector<int>& arr){
   int j =0; // write pointer ( next position of non zero element)
   for(int i=0;i<arr.size(); i++){ // read pointer (traverses array)
      if(arr[i] != 0){
         arr[j++] = arr[i]; // first, all non zero elements will be placed in array
      }
   }
   // array size will be same
   while(j<arr.size()){
      arr[j++] =0; // in remaining space, zeroes will be pushed
   }
   return arr;
}
void printvector(const vector<int>& arr){
   cout << "[ ";
   for(int num : arr){
   cout << num<< " ";
   }
   cout << "]";
}

int main(){
   vector<int> array;
    int n, target;
    cout << "Enter the size of array" << endl;
    cin >> n;

    array.resize(n);

    cout << "enter the elements of array" << endl;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    Move0s(array);

    cout << "After moving zeros: ";
    printvector(array);

    return 0;
}
