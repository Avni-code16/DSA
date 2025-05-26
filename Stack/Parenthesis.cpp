// Parethesis order with stack

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void P(string s){
    vector<char> stack;
    

    if(s.size() == 0){
        cout << "Empty!" << endl;
        return;
    }

    for( char c: s){
        if(c == '[' || c== '{' || c=='(' ){
            stack.push_back(c);
        }

        if(c == ']' && stack.front() == '['){
         stack.pop_back();
        }

        if(c == ')'&& stack.front() == ')'){
            stack.pop_back();
        }

        if(c == '}'&& stack.front() == '}'){
            stack.pop_back();
        }
    }


    if(stack.empty()){
        cout << "Success! Balanced Parenthesis!" << endl;
    } else{
        cout << "unbalanced Parethesis!" << endl;
    }

}



