#include <iostream>
#define MAX 5
using namespace std;

// front and rear are array indices
//front is 1st element, rear is last---queue[rear] 

int queue[5]; // array based static queue
 int front = -1;
int rear = -1;

bool IsEmpty(){ // we need to return both true and false
    if (front ==-1 && rear == -1) {return true;} // bool always needs to return true and false
    return false; // it can't be that it is only true or returning nothing
}; //option  1 , explicitely mention  true and false

bool IsFull(){
return (rear == MAX -1 );
};

void enqueue(int x){
   if(IsFull()){ // function call should always be made with parenthesis 
    cout << "The List of overflowed! Can't add any elements"<< endl;
    return; // forgot this
   }
   if(IsEmpty()){
    front = 0;
   }
   rear ++;
   queue[rear] = x;
   cout<< "Enqueued  " << x<< endl;
    
}

void dequeue(){ // Follows FIFO principle
    // removes queue[front]
    if(IsEmpty()) {
        cout<<"List is empty!" << endl;
        return; // don't forget
    }
    cout<< "Removed  " << queue[front] << " from the list"<< endl;
    if(front == rear){
        front = rear= -1; // edge case: one last element in the list is remaining
    } // rear= front = 3, after removing this both will set to -1
    else{
        ++ front; // y0u can shift the array index manually, if "delete" arr[0] then arr[1] will be arr[0]
        // but it will be less efficient
    }
}

void display(){
    if(IsEmpty()){
     cout<< "List is empty!"<< endl;
    }
    for(int i=front;i<= rear;i++){ // print from front to rear not 0 to rear
        // to use 0; manually shift index using for loop[less efficient]
        // our array always starts from front, uske agge we don't consider
        cout<< "The list is:" << endl;
        cout<<" "<< queue[i]<< endl;
    }
}

int main(){
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();

    return 0;
}