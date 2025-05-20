// counting occurence of a number in a array
#include <iostream>
#include <vector>
using namespace std;

int occurrence(const vector<int>& arr, int x){

    int count = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i] == x){
         count ++; 
        }
    }
    return count;
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
    cout << "Enter the element which you want to know ocurrence"<< endl;
    cin >> target;
     
    int result = occurrence(array,target);
    if(result == 0){
      cout << "Element doesn't exist in array" << endl;
    } else{
     cout << "The occurence of the element " << target << " is: " << result << endl;
    }
    return 0;

}