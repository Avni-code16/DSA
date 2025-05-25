// Inserting a node at beginning/nth/end
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

void append(Node*&head,int data){
    Node* newNode = new Node(data);
    if(head==nullptr){
        head = newNode;
        return;
    } 

   Node*current = head;
   while(current->next != nullptr){
    current = current->next;
   }
   current->next = newNode;
    
}


void insertion(Node*& head, int position, int data){
    if(position < 0){
        cout << "Invalid! Append the Linked List first!" << endl;
        return;
    }
 Node* current = head;
    if(position == 0){
        Node* newNode= new Node(data);
        Node*temp = head;
        head = newNode;
        newNode->next = temp;
    } else{
        for(int i=0; i< position-1; i++){
            if(current == nullptr){
                cout << "Invalid!" << endl;
            }
            current = current->next;
        }
        Node* a = new Node(data);
        Node* temp = current->next;
        current->next = a;
        a-> next = temp;
    }
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

void print(Node*&head){
    if (head == nullptr) {
    cout << "Linked list is empty!" << endl;
    return;
}
    Node*current = head;
    while(current->next != nullptr){
        cout << current-> data << "  ->  " ;
        current = current->next;
    }
    cout << current->data << " ";
    return;
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
    int position;
    cout << "Enter the positon you wish to change ( starting from 0)" << endl;
    cin >> position;

    if(total-1 < position){
        cout << "Invalid position! " << endl;
    }
    int data;
    cout << "Enter the data you wish to enter at " << position << " " <<endl;
    cin >> data;

    insertion(head,position,data);

    cout << "The final linked list is : " << endl;
    print(head);
}