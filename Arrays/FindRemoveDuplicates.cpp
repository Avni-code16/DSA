// sorted array, easier to figure out duplicates
// Finding : map (dictionary)
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

void Find_Duplicates(const vector<int>& array){
  map<int,int> frequency;
  for(int num: array){
    frequency[num]++; // <element, no.of duplicates>
  }
  cout << "Numbers with duplicates" << endl;
 
  for(auto pair: frequency){
    if(pair.second > 1 ){
        cout << "Element " << pair.first << " has " << pair.second << " duplicates " << endl;
        
    }
  }
}

int Remove_Duplicates( vector<int>& array){
   int j =0; // write index; Keeps track of where to place the next unique value
   for(int i=0; i<array.size(); i++){ // read index; it reads each value
    if(array[i] != array[j]){
      array[++j] = array[i];
    }
   }
   // At the end, j is the index of the last unique number
    // So total unique numbers = j + 1
    return j+1;
}
void Print_Array(const vector<int>& array, int x){
  for(int i=0; i< x; i++){
    cout << array[i] << " ";
  }
}

int main(){
    vector<int> array; // empty vector to store numbers
    string line;// read entire input line
    cout << "Enter the elements of SORTEd array with a space: " << endl; // in a form of string
    getline(cin,line); // read the entire line of input once

    stringstream ss(line);
    int num; // break the line into individual numbers
    while (ss >> num){ // extract each number asnd add it to vector
       array.push_back(num);
    }

    Find_Duplicates(array);
   int lenght =  Remove_Duplicates(array) ;
    Print_Array(array, lenght);
    return 0;

}


