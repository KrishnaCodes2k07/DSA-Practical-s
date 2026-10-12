1. What is Queue? 
Ans: A queue is a linear data structure in which data is inserted from the rear end and deleted from the front end.
    It follows the FIFO (First In, First Out) principle, which means the element inserted first is removed first.
    Example: A line of people waiting at a ticket counter.

2. How is Queue represented?
Ans: A queue can be represented using two methods:
     1. Array: Elements are stored in consecutive memory locations.
     2. Linked List: Elements are stored in nodes connected through links.
      The `front` points to the first element, and the `rear` points to the last element

3. Enlist the types of Queues.
Ans: The main types of queues are:
     1. Linear Queue: Elements are inserted at the rear and deleted from the front.
     2. Circular Queue: The last position is connected logically to the first position.
     3. Priority Queue: Elements are processed according to their priority.
     4. Deque (Double-Ended Queue): Elements can be inserted and deleted from both ends.

4. What is the concept of Circular Queue?
Ans: In a circular queue, the last position is connected logically to the first position to form a circle.
     It helps reuse empty spaces created by deleting elements and avoids wastage of memory in an array-based queue.
     Example: Circular seating arrangements or a circular buffer.

6. What are the applications of Queue?
Ans: The applications of a queue are:
    1. Categorizing data: Organizing elements in the order they are received.
    2. Queue simulation: Simulating real-life waiting lines, such as ticket counters.
    3. CPU scheduling: Managing processes waiting for CPU time.
    4. Printer scheduling: Handling print jobs in order.
    5. Data transfer: Managing data packets during communication.
    6. Breadth-First Search (BFS): Visiting nodes in graphs and trees level by level.

7. What is Priority Queue?
Ans: A priority queue is a collection of elements in which each element is assigned a priority.
     The order in which elements are deleted or processed depends on their priority.
    - An element with higher priority is processed before an element with lower priority.
    - If two elements have the same priority, they are generally processed in the order in which they were inserted (FIFO).
     Example: In a hospital, emergency patients may be treated before patients with minor problems.

8. What is Deque?.
Ans:  The term Deque is a contraction of the name Double-Ended Queue.It is a linear data structure in which elements can be inserted and deleted
     from either end, that is, the front or the rear, but not directly from the middle.
     There are two types of deque:
     1. Input-Restricted Deque: Insertion is allowed at only one end, but deletion is allowed at both ends.
     2. Output-Restricted Deque: Deletion is allowed at only one end, but insertion is allowed at both ends.
     Example: A deque can be used in palindrome checking and sliding-window algorithms.
