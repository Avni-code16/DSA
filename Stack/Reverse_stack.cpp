// Reverse a string using stack
// stack is implemented by a vector

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<char> Reverse(vector<char> str){

    vector<char> stack;
    vector<char> res;

    for(char c: str){
      stack.push_back(c);
    }

   while(!stack.empty()){
     res.push_back(stack.back());
    stack.pop_back();
   }

    return res;
}

void Print(vector<char> rs){
    for(char c: rs ){
        cout << c << "";
    }
}

int main(){
    string line;
    vector<char> a;

    cout << "Please enter a string" << endl;
    getline(cin,line);

    stringstream ss(line);
    char c;

    while( ss>> c){
        a.push_back(c);
    }

    a = Reverse(a);

    cout << "Reversed string is : " << endl;
    Print(a);

    return 0;

}