// Stack implementation using Linked List
// Best for Dynamic memory allocation and better memory management

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

};

class Stack_LinkedList{
    Node* top;

    public:
    Stack_LinkedList(){
        top = nullptr;
    }

    void push(int x){ // LIFO
        Node* Newnode = new Node(x);
        Newnode->next = top;
        top = Newnode;
    }

    int pop(){
        if(top == nullptr){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int value = top->data;
        Node*temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    int peek(){
        if(top == nullptr){
            cout << "Stack Empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        if(top == nullptr){
            return true;
        }
    }

    ~Stack_LinkedList(){
        while(top != nullptr){
            Node*temp = top;
           top = top->next;
           delete temp;
        }
    }
};

int main() {
    Stack_LinkedList stack;
    stack.push(10);
    stack.push(20);
    cout << stack.pop() << endl; 
    stack.push(100);
    cout << stack.peek() << endl; 

    return 0;

}


