#include <iostream>
#include <vector>
using namespace std;

void reverse( const vector<int>& array)
{
    cout << "Reverse array is : ";
    for(int i = array.size()-1 ;i>=0 ; i--){
        cout << array[i]<< "  "<< endl;
    }
    cout << endl;
}

int main(){
    int n ;
    cout << "Enter the number of elements in array"<< endl;
    cin >> n;
    vector<int> array(n);

    cout << "Enter the elements of array " << endl;
     for(int i=0; i<n;i++){
        cin>> array[i];
     }

      reverse(array);
   
     return 0;
}