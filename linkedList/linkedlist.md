## Why Arrays Might Be Suboptimal:

1. **Deletion: Overwriting Instead of Direct Deletion**
   - In arrays, deletion involves overwriting the element rather than a direct removal, leading to inefficient use of memory.

2. **Insertion: Adding Instead of Direct Insertion**
   - Array insertion typically involves adding elements, as opposed to directly inserting them, causing potential inefficiencies.

3. **Ungrowable: Fixed Size Limitations**
   - Arrays come with a fixed size, making them less flexible for dynamic storage needs.

---

## Linked Lists: A More Flexible Alternative

A linked list is a node-based structure without the constraints of indices found in arrays.

### 1. Singly Linked List:
   - **Value:** Data stored in the node.
   - **Head:** Reference to the first node.
   - **Next:** Pointer to the next node.
   - **Deletion:** O(1)
   - **Insertion:** O(1)

### 2. Doubly Linked List:
   - **Value:** Data stored in the node.
   - **Head:** Reference to the first node.
   - **Next:** Pointer to the next node.
   - **Prev:** Pointer to the previous node.
   - **Tail:** Reference to the last node.
   - **Deletion:** O(1)
   - **Insertion:** O(1)

### Linked List Time and Space Complexity:
- **Prepend/Append:** O(1)
- **Insertion in the Middle:** Depends on the position
- **Deletion at the Ends (Head or Tail):** O(1)
- **Deletion in the Middle:** Depends on the position
- **Get Head or Tail:** O(1)
- **Get in General:** O(1)
