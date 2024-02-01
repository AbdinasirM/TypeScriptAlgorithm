#include <iostream>
#include <string>
using namespace std;

// Define the Node structure
template <typename T>
struct Node {
    T data;           // Data stored in the node
    Node* next;       // Pointer to the next node in the list

    Node(T value) : data(value), next(nullptr) {}  // Constructor to initialize node with data and nullptr
};

// Define the SinglyLinkedList class
template <typename T>
class SinglyLinkedList {
private:
    Node<T>* head;     // Pointer to the first node in the list

public:
    SinglyLinkedList() : head(nullptr) {}  // Constructor to initialize an empty list

    // Function to insert a new node at the end of the list
    void append(T value) {
        Node<T>* newNode = new Node<T>(value);  // Create a new node with the given value

        if (head == nullptr) {
            head = newNode;  // If the list is empty, set the new node as the head
            return;
        }

        Node<T>* current = head;  // Initialize a pointer to traverse the list starting from the head
        while (current->next != nullptr) {
            current = current->next;  // Move to the last node in the list
        }

        current->next = newNode;  // Set the next of the last node to the new node
    }

    // Function to display the elements of the list
    void display() {
        Node<T>* current = head;  // Start from the head

        while (current != nullptr) {
            std::cout << current->data << " ";  // Print the data of the current node
            current = current->next;  // Move to the next node
        }

        std::cout << std::endl;
    }

    // Function to delete a node by value
    void deleteNode(T value) {
        if (head == nullptr)
            return;  // If the list is empty, nothing to delete

        if (head->data == value) {
            Node<T>* temp = head;  // If the value is in the head, store head in temp
            head = head->next;     // Update head to the next node
            delete temp;           // Delete the original head
            return;
        }

        Node<T>* current = head;  // Start from the head
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;  // Move to the node before the one to be deleted
        }

        if (current->next == nullptr)
            return;  // If the value is not found, do nothing

        Node<T>* temp = current->next;        // Store the node to be deleted in temp
        current->next = current->next->next;  // Skip the node to be deleted
        delete temp;                          // Delete the node
    }

    // Destructor to free memory
    ~SinglyLinkedList() {
        Node<T>* current = head;  // Start from the head

        while (current != nullptr) {
            Node<T>* temp = current;  // Store the current node in temp
            current = current->next;  // Move to the next node
            delete temp;              // Delete the original current node
        }
    }
};

int main() {
    SinglyLinkedList<int> myList;  // Create a linked list of integers
    SinglyLinkedList<string> months;

    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);

    months.append("Jan");
    months.append("Feb");
    months.append("Mar");
    months.append("Apr");
    months.append("May");
    months.append("Jun");
    months.append("Jul");
    months.append("Aug");
    months.append("Sep");
    months.append("Oct");
    months.append("Nov");
    months.append("Dec");


    std::cout << "Original List: ";
    myList.display();


    std::cout << "Original Month List: ";
    months.display();

    myList.deleteNode(2);
    months.deleteNode("Dec");

    std::cout << "List after deleting node with value 2: ";
    myList.display();
    std::cout << "List after deleting node with month Dec: ";
    months.display();

    return 0;
}
