#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void append(Node* &head, int data){
    Node* NewNode = new Node{data, nullptr};
   if (head == nullptr){
     head = NewNode;
     return;
   }
   Node* current = head;
   while ( current -> next != nullptr){
     current = current -> next;
   }
   current -> next = NewNode;
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

int main(){
    int data;
    Node* head = nullptr;
    cout << "Enter the numbers in linked list:  " << endl;
    cin >> data;

    while(data != -1){
      append(head,data);
      cin >> data;
    }

    cout << "Total elements in the list is : " << counting_nodes(head) << endl;

    return 0;
}