// check is array is sorted, if yes ascending or decending
// 11 May,25
#include <iostream>
#define MAX 5
using namespace std;


int arr[MAX];
bool asc(int arr[MAX]){
    for(int i=0; i<MAX-1;i++){ // MAX -1 to prevent out of bounds in i+1
    if(arr[i] > arr[i+1]){
        return false; // if element i is bigger than that of i+1, its not ascending. immediately break
    }
    }
    return true; // after the loop succesfully executes without breaking, return true :)
};

bool des(int arr[MAX]){
    for(int i = 1; i<MAX;i++){
        if(arr[i-1] < arr[i]){ // i-1 cause in i+1 , put MAX in i, it will go index
            // if element at i>  i-1 ( 10 > 8), it will be ascending
            // imp - it will check each pair, and then move on with loop
            return false; // break, if one pair found in ascending
        }
    }
    return true;
};

bool equal(int arr[MAX]){

    for(int i=0; i<MAX-1; i++){
        if(arr[i] != arr[i+1]){ // Comparision Operator 
            return false;
        }
    }
 return true;
}

int main(){
    int arr[MAX];
    cout << "Please enter array of 5 integer elements"<< endl;
    for(int i =0; i<MAX; i++){
        cin >> arr[i];
    }

     if(equal(arr)){
        cout << "All elements are equal"<< endl;
     } 
    else if(asc(arr)){
        cout << "The array is in ascending order!" << endl;
    } else if(des(arr)){
     cout << "The array is in decending order!"<< endl;
    } else{
        cout<< "The array is not ordered!" << endl;
    }

    
 return 0;
}







