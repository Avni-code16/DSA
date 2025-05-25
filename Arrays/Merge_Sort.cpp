// Merge Sort
// 1. Divide the array
// 2. sort and then merge
// Merge Sort has a time complexity of O(n log(n)) in best, average & worst case
// It has a space complexity of O(n) as we need additional space to store temporaray arrays while merging subarrays in merging process;

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// forward declaration
vector<int> Merge_Sort(vector<int>& left, vector<int>& right);// telling the copiler that this will appear afterwards

vector<int> Divide(vector<int>arr){
if (arr.size() <=1){
 return arr;
}
int mid = arr.size()/2;
 vector<int> left(arr.begin(), arr.begin()+ mid);
  vector<int> right(arr.begin()+mid, arr.end());

  left = Divide(left);
  right = Divide(right);

  return Merge_Sort(left,right);

}
vector<int> Merge_Sort(vector<int>& left, vector<int>& right){
    vector<int> result;
    int i =0, j=0;

    while(i < left.size() && j< right.size()){
        if(left[i] < right[j]){
            result.push_back(left[i]);
            i++;// till we find a number in left which is greater than right[j]
        } else{
            result.push_back(right[j]);
            j++;
        }
    }

    while(i <left.size()){
        result.push_back(left[i++]);
    } 
    while(j <right.size()){
        result.push_back(right[j++]);
    } 

    return result;
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
    array = Divide(array);

    cout << "Sorted array :  ";
    print(array);

    return 0;

}