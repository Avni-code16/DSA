// get the value of Nth node
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

void Find(Node*&head, int node){
    if(head == nullptr){
        return;
    }

    int i=0;
    Node*current = head;
    while(current!= nullptr){
        
        if(i == node){
            cout << node<< "   node's data is:  "<<current->data <<endl; 
            return;
        }
        current= current->next;
        i++;
    }
    cout << "Invalid position! Node does not exist." << endl;
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
    int node;
    cout << "Enter the node whose value you wish to see" << endl;
    cin >> node;

    if(total < node && node <0){
        cout << "Invalid position! " << endl;
    }
    

    Find(head,node);

    cout << "The final linked list is : " << endl;
    print(head);
}