// sum of elements in an array
// use vector array
#include <iostream>
#include <vector>
using namespace std;
int sum(const vector<int>& arr){
    int sum =0;
    for(int i=0;i<arr.size();i++){
     sum = sum+ arr[i];
    }
    return sum;
}
double average(const vector<int> arr){
    if(arr.empty()){
        cout << "Cannot compute in an empty array!" << endl;
        return 0.00;
    }
    int avg = static_cast<double>(sum(arr))/arr.size();
    return avg;
}

int main(){
     vector<int> arr;
    int n;
    cout<< "Please enter the number of elements you wish to enter in array: " << endl;
    cin >> n;
    arr.resize(n);

    cout << "Please enter elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The sum of array is : " << sum(arr) << endl;
    cout << " The average of array is : " << average(arr) << endl;

    return 0;
}