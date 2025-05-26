// Implementing stack using array
// manual memory management

//push(x): Adds element x to the top of the stack

//pop(): Removes and returns the top element

//peek(): Returns the top element without removing it

//isEmpty(): Checks if stack is empty

//size(): Returns current number of elements


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Stack{
    public:
    int* stack; // Dynamic memory allocation
    int top;
    int capacity;

    Stack(int size){ // Constructor
        capacity = size;
        stack = new int[size]; // dynamically allocated memory
        top = -1; // indicates empty stack
    }

    ~Stack(){ // destructor
   delete[] stack;
    }

 public: 
    void push(int x){
    if(top == capacity -1){
        cout << "Stack overflow!" << endl;
        return;
    }
    stack[++top] = x;
    }

    int pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return -1;
        }
         return stack[top--];
    }

    int peek(){
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return stack[top];
    }

    bool IsEmpty(){
        if(top == -1){
            return true;
        } else{
            return false;
        }
    }

    int size(){
       return top+1;
    }
};

int main(){
int size =0;
int n =0;
    cout << "Please enter the number of elements in stack: " << endl;
    cin >> size;

    Stack my_stack(size);

    cout << "Enter the elements of stack: " << endl;
    for(int i=0; i<size; i++){
     cin >> n;
     my_stack.push(n);
    }

    cout << "Peek: " << my_stack.peek() << endl;
    cout << "Size: " << my_stack.size() << endl;

    return 0;
}


