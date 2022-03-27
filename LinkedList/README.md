
# SINGLY LINKED LIST

* Each node contains data and has a pointer that will point to the next node of the same datatype.

* We can traverse the list in one way direction only. i.e, in forward direction.

* Like arrays, linked lists are also linear data structures but in linked lists elements are not stored at contiguous memory locations. They can be stored anywhere in the memory but for sequential access, the nodes are linked to each other using pointers.

## Advantages of Linked Lists over Arrays

| Array             | Linked List                                                                |
| ----------------- | ------------------------------------------------------------------ |
| The size of the arrays is fixed, so we must know the upper limit on the number of elements in advance. | linked lists are dynamic and the size of the linked list can be incremented or decremented during runtime.|
| Array elements can be accessed randomly using the array index. |Random accessing is not possible in linked lists. The elements will have to be accessed sequentially. |
| Insertion and Deletion operations are costlier since the memory locations are consecutive and fixed. | Insertion and Deletion operations are fast and easy in a linked list.|
|Memory is allocated during the compile time (Static memory allocation). | Memory is allocated during the run-time (Dynamic memory allocation). |


## Disadvantages of Linked Lists:

* Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So, we cannot do a binary search with linked lists efficiently with its default implementation. Therefore, search operation is costly in linked lists in comparison to arrays.
* Extra memory space for a pointer is required with each element of the list.

## Time Complexity


| Data structure     | Access   | Search  | Insertion |Deletion |
| :----------------- | :------- | :-------| :---------|:------- |
| Singly Linked list | O(N)     | O(N)    | O(1)      | O(1)    |






