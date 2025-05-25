// Deletion at beginning/nth/end
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void append(Node*& head, int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node*current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;

}

void deletion(Node*& head, int position){
    if(position <0){
        cout << "Invalid!" << endl;
        return;
    }
    if(head == nullptr){
        cout << "Linked list empty! Cannot delete!" << endl;
        return;
    }

    if(position ==0){
        Node*temporary = head->next;
        head = head->next;
        delete temporary;
    }
    Node*current = head;

    for(int i=0; i< position-1; i++){
        current = current->next;
    }
    Node*temp = current->next;
    current->next = current->next->next; // de-link
    delete temp;
}

void print(Node*& head){
    if(head == nullptr){
        cout << "Linked list empty!" << endl;
        return;
    }
    Node*current = head;
    cout << "head -> ";
    while(current->next!= nullptr){
        cout << current->data << " -> " ;
        current = current->next;
    }
    cout << current->data << "  ";
    cout << "-> nullptr";
    return;
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


void freeList(Node*& head) {
    while (head != nullptr) {  // Keep deleting until the list is empty
        Node* temp = head;     // Store current node
        head = head->next;     // Move head to next node
        delete temp;           // Free memory of current node
    }
}


int main(){
    string line;

    cout << "Please enter Linked list values : " << endl;
    getline(cin,line);

    Node*head = nullptr;

    stringstream ss(line);
    int num;

    while(ss>> num){
        append(head,num);
    }

    int total = counting_nodes(head);

    int position;
    cout << "Enter the positon you wish to delete ( starting from 0)" << endl;
    cin >> position;

    if(total >= position && position <0){
        cout << "Invalid!" << endl;
    }
    deletion(head,position);

    cout << "Final array is : " << endl;
    print(head);

    freeList(head);
    return 0;
}
    
