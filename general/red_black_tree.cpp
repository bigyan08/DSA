#include <iostream>
using namespace std;

enum Color { RED, BLACK };

struct Node {
    int data;
    Color color;
    Node *left, *right, *parent;

    Node(int data) : data(data), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    Node *root;

    void fixViolation(Node *node) {
        while (node != root && node->parent->color == RED) {
            Node *grandparent = node->parent->parent;
            if (node->parent == grandparent->left) {
                Node *uncle = grandparent->right;
                if (uncle && uncle->color == RED) {
                    node->parent->color = BLACK;
                    uncle->color = BLACK;
                    grandparent->color = RED;
                    node = grandparent;
                } else {
                    if (node == node->parent->right) {
                        node = node->parent;
                        leftRotate(node);
                    }
                    node->parent->color = BLACK;
                    grandparent->color = RED;
                    rightRotate(grandparent);
                }
            } else {
                Node *uncle = grandparent->left;
                if (uncle && uncle->color == RED) {
                    node->parent->color = BLACK;
                    uncle->color = BLACK;
                    grandparent->color = RED;
                    node = grandparent;
                } else {
                    if (node == node->parent->left) {
                        node = node->parent;
                        rightRotate(node);
                    }
                    node->parent->color = BLACK;
                    grandparent->color = RED;
                    leftRotate(grandparent);
                }
            }
        }
        root->color = BLACK;
    }

    void leftRotate(Node *x) {
        Node *y = x->right;
        x->right = y->left;
        if (y->left)
            y->left->parent = x;
        y->parent = x->parent;
        if (!x->parent)
            root = y;
        else if (x == x->parent->left)
            x->parent->left = y;
        else
            x->parent->right = y;
        y->left = x;
        x->parent = y;
    }

    void rightRotate(Node *x) {
        Node *y = x->left;
        x->left = y->right;
        if (y->right)
            y->right->parent = x;
        y->parent = x->parent;
        if (!x->parent)
            root = y;
        else if (x == x->parent->right)
            x->parent->right = y;
        else
            x->parent->left = y;
        y->right = x;
        x->parent = y;
    }

public:
    RedBlackTree() : root(nullptr) {}

    void insert(int data) {
        Node *newNode = new Node(data);
        if (!root) {
            root = newNode;
            root->color = BLACK;
            return;
        }
        Node *current = root, *parent = nullptr;
        while (current) {
            parent = current;
            if (data < current->data)
                current = current->left;
            else
                current = current->right;
        }
        newNode->parent = parent;
        if (data < parent->data)
            parent->left = newNode;
        else
            parent->right = newNode;
        fixViolation(newNode);
    }

    void inOrder(Node *node) {
        if (!node)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void display() {
        inOrder(root);
        cout << endl;
    }
};

int main() {
    RedBlackTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(15);

    cout << "In-order traversal:" << endl;
    tree.display();
    return 0;
}
