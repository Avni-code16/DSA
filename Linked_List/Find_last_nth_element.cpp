// find the nth node from the end of the linked list
#include <iostream>
#include <sstream>
#include <string>

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

void append(Node*&head, int data){
    Node*newNode = new Node(data);

    if(head==nullptr){
     head = newNode;
     return;
    }
    Node*current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current ->next= newNode;
}

int  counting_nodes(Node*head){
    int sum = 0;
    if (head == nullptr){
        return -1;
    }
    Node* current = head;
    while (current-> next != nullptr){
      sum = sum +1;
      current = current -> next;
    }
    if (current ->next == nullptr){
        sum++ ;
    }
    return sum;

}

void Last_N_element(Node*& head,int n){

 if(head == nullptr){
    cout << "List empty!" << endl;
    return;
 }

 if( n <= 0){
    cout << "Invalid index!" << endl;
    return;
 }

   Node* slow = head;
    Node* fast = head;

    // move the fast pointer n steps ahead

    for(int i=0; i<n; i++){
        if(fast ==nullptr){
            cout << "List too short!" << endl;
            return;
        }
        fast = fast->next;
    }
    while( fast!= nullptr && fast->next != nullptr ){
        slow= slow->next;
        fast = fast->next;
    }

    cout << "Last " << n << " th node's value is : " << slow->data << " " << endl;

}


int main(){
    string line;

    cout << "Please enter the values of Linked list" << endl;
    getline(cin,line);

    Node* head = nullptr;
    
    stringstream ss(line);
    int num;

    while( ss>> num){
        append(head,num);
    }

    int total = counting_nodes(head);

    int n;
        cout << "Enter the nth element from the last you wish to know" << endl;
        cin >> n;

    

    Last_N_element(head,n);

    return 0;
    
}