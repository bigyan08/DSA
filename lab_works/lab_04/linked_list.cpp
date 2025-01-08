// Learning linked list through traversal, searching, insertion and deletion
#include<iostream>
using namespace std;

// since a node contains integer type data and pointer to next node, so we use
// structure to organize the node.
struct Node
{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;  //by default we set the pointer to null for next node 
    }
};

// while traversing we pass head to the current node pointer, and loop until the 
// current pointer reaches the null , while looping we print out the data in the
// current node and changed to the next node pointer.
void traversal(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<<current->data<<endl;
        current = current->next;
    }
}

int main(){

// Creating some sample nodes
    Node* node1 = new Node(5);
    Node* node2 = new Node(8);
    Node* node3 = new Node(10);

// Assigning the next pointers to another node
    node1->next = node2;
    node2->next = node3;

// Assigning the first node as head node
    Node* head = node1;

// Calling the traversal function passing the head node
    traversal(head);

    return 0;

}
