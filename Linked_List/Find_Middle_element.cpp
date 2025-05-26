// find the middle node of the linked list
// fast and slow pointer
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


void Find_Middle(Node*&head){
     if (head == nullptr) {
        cout << "The linked list is empty!" << endl;
        return;
    }


    Node*slow = head;
    Node* fast = head;


    while(fast!= nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow= slow->next;
       // fast & slow will start at head( which points at node 1)
       // in even number of list, fast will travel to second last node(enough to find middle)
    } 
    cout << "The Middle element is : " << slow->data << " " << endl;

    
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
          
    Find_Middle(head);

    return 0;
    
}