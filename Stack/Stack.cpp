#include <iostream>

using namespace std; 

// Node class representig a single node in he linked list 
class Node {
public: 
	int data;
	Node* next; 

	Node() {
		next = NULL; 
	}
};

// stack class 
class Stack {
private:
	Node* top; // Pointer to the top node of the stuck 

public: 
	Stack() {
		top = NULL; // Initialize the stack with a null top pointer 
	}

	// Push operation Insert an element onto the top of the stack 
	int push(int value) {
		Node* newNode = new Node(); // 1. Allocate memorry for the new node 
		newNode->data = value; // 2. assign value 
		newNode->next = top; //3. Set the next pointer of the new node to current top node 
		top = newNode; // 4. Update the top pointer to the new node 
	}
};
