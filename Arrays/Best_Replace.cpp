// using the "backwards traversal with running maximum" 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Replace(vector<int>& array){
 int n = array.size();
 if(n ==0){
    return array;
 }
 int max_so_far = -1;
 for(int i=n-1;i >= 0; --i){
   int temp = array[i];
   array[i] = max_so_far;
   max_so_far = max(max_so_far,temp);
}
return array;
}

void print(vector<int>& arr){
    for(int num: arr){
        cout << num << "  ";
    }
    cout << endl;
}

int main(){
    vector<int> arr;
    string line;

    cout << "Please enter the array : " << endl;
    getline(cin,line);

    stringstream ss(line);
    int num;

    while( ss>>num){
        arr.push_back(num);
    }
    arr = Replace(arr);
    cout << "desired array is : " << endl;
    print(arr);
    return 0;
}