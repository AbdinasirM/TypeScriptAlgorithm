# Linked List Data Structures

## 1. Queue - First In, First Out (FIFO)

A **queue** is a specific implementation of a linked list, following the First In, First Out (FIFO) principle. In a queue, elements are added to the rear and removed from the front.

### Operations:

1. **Enqueue (Adding):**
   - Adds an element to the rear of the queue.
   - *Time Complexity: O(1)*

   ```c++
   # Example
   enqueue(item)
   ```

2. **Dequeue (Deleting):**
   - Removes the element from the front of the queue.
   - *Time Complexity: O(1)*

   ```c++
   # Example
   dequeue()
   ```

3. **Peek (See the First Element):**
   - Retrieves the element from the front of the queue without removing it.
   - *Time Complexity: O(1)*

   ```c++
   # Example
   peek()
   ```

By utilizing a linked list as the underlying data structure, queues provide efficient constant-time operations for both enqueueing and dequeueing elements.
```