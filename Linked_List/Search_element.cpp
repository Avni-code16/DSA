// serach for element
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

void Search(Node*& head, int target){
    if(head == nullptr){
        cout << "list is empty!" << endl;
        return;
    }
    int position =0;

    Node*current = head;
    while(current->next != nullptr){
        if(current->data == target){
            cout << "Success! Target found at position:  " << position << " " << endl; 
        }
        current = current->next;
        position ++;
        
    }

    if(current-> next ==nullptr && current->data == target){
     position ++;
      cout << "Success! Target found at position:  " << position << " " << endl;
      return;
    }

    cout << "Element was not present! Please choose different elemet!" << endl;
    return;
    
}

void Free_List(Node*& head){
    while(head != nullptr){
        Node*temp = head;
        head = head->next;
        delete temp;
    }
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

    int target;
    cout << "Enter the value of target you want to search :  ";
    cin >> target;

    Search(head,target);
    Free_List(head);

    return 0;
}