#include <iostream>
using namespace std;

// Forward declaration for MyQueue class
template <class T>
class MyQueue;

// Node class for the linked list
template <class T>
class Qnode {
private:
    T value;              // Data value of the node
    Qnode<T>* next = nullptr;  // Pointer to the next node in the list
    friend class MyQueue<T>;   // Allowing MyQueue to access private members of Qnode

public:
    // Constructor to initialize the node with a value and the next node
    Qnode(T val, Qnode<T>* nxt) : value(val), next(nxt) {}
};

// Queue class
template <class T>
class MyQueue {
private:
    Qnode<T>* head = nullptr; // Pointer to the front of the queue
    Qnode<T>* tail = nullptr; // Pointer to the rear of the queue

public:
    int length; // Length of the queue

    // Constructor to initialize the queue
    MyQueue() : length(0), head(nullptr), tail(nullptr) {}

    // Method to add a new element to the rear of the queue (enqueue)
    void enqueue(T newNode) {
        Qnode<T>* node = new Qnode<T>{newNode, nullptr}; // Creating a new node with the given value
        if (head == nullptr) {
            length++;
            tail = head = node; // If the queue is empty, set both head and tail to the new node
            return;
        }

        tail->next = node; // Otherwise, add the new node to the rear and update the tail
        tail = node;
        length++;
    }

    // Method to remove and return the element from the front of the queue (dequeue)
    T dequeue() {
        if (head == nullptr) {
            return -1; // If the queue is empty, return -1 (assuming -1 is not a valid value in the queue)
        }

        // Create a temporary node to save the head and a variable for the current node's value
        Qnode<T>* tempNode = head;
        T currentValue = tempNode->value;

        head = head->next; // Move the head to the next node
        delete tempNode; // Delete the temporary node

        length--;
        return currentValue; // Return the deleted node's value
    }

    // Method to return the value of the element at the front of the queue without removing it (peek)
    T peek() {
        if (head == nullptr) {
            return -1; // If the queue is empty, return -1 (assuming -1 is not a valid value in the queue)
        }
        return head->value; // Return the value of the element at the front of the queue
    }
};

int main() {
    Qnode<int> Nodes(42, nullptr); // Creating a node with value 42 (not used in the main code)
    MyQueue<int> lunchQueue; // Creating a queue of integers

    lunchQueue.enqueue(12); // Adding 12 to the queue
    lunchQueue.enqueue(45); // Adding 45 to the queue

    MyQueue<int> tempQueue = lunchQueue; // Create a temporary queue for storing items

    // Printing all the items in the queue without removing them
    while (tempQueue.length > 0) {
        cout << "Peeked value: " << tempQueue.dequeue() << endl;
    }

    return 0;
}
