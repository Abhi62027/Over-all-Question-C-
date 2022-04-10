#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
  public:
    Node* head;
  public:
   
    LinkedList(){
      head = NULL;
    } 
};
  
int main() {
  
  LinkedList MyList;

  Node* first = new Node();
  first->data = 10;
  first->next = NULL;
  first->prev = NULL;
  
  MyList.head = first;       

  Node* second = new Node();
  second->data = 20;
  second->next = NULL;
 
  second->prev = first;  
  first->next = second; 

  Node* third = new Node();
  third->data = 30;
  third->next = NULL;
 
  third->prev = second;
  second->next = third;

  return 0;
}
