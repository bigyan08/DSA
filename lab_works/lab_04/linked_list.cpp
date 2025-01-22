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

// C++ Function to insert a node at the end of the linked
// list
Node* insertAtEnd(Node* head, int value)
{
    // Create a new node with the given value
    Node* newNode = new Node(value);

    // If the list is empty, make the new node the head
    if (head == nullptr) 
        return newNode;

    // Traverse the list until the last node is reached
    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    // Link the new node to the current last node
    curr->next = newNode;
    return head;
}
int main(){

// Creating some sample nodes
    Node* head = nullptr;
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 25);

// Calling the traversal function passing the head node
    traversal(head);

    return 0;

}
