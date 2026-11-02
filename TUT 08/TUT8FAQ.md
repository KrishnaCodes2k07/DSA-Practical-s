# FAQ: Binary Search Tree (Create, Search, Traversal)

**1. What is a tree?**
A tree is a nonlinear data structure used to manage hierarchical data. It has one special node called the root, and every other node hangs below it as a child of exactly one parent. File systems and organization charts are common examples.

**2. What is a binary tree?**
A binary tree is either empty, or it consists of a root and two disjoint binary trees called the left subtree and the right subtree. So every node has at most two children.

**3. What are the types of binary trees?**
Common types are the complete binary tree, full binary tree, binary search tree, skewed binary tree and threaded binary tree. They differ in how nodes are filled in, ordered or linked.

**4. What are the tree traversal techniques?**
Traversal can be recursive or non-recursive (iterative). Both visit every node exactly once. The recursive form uses function calls, while the non-recursive form uses an explicit stack.

**5. What are the recursive tree traversal techniques?**
Inorder (left, root, right), preorder (root, left, right) and postorder (left, right, root). Inorder traversal of a binary search tree prints the keys in sorted order.

**6. What are AVL trees?**
AVL trees are height-balanced binary search trees. After every insertion or deletion, the heights of the left and right subtrees of any node differ by at most one, and rotations restore this balance. This keeps search time at O(log n).

**7. What are the basic operations that can be performed on a tree?**
Create (insert), search and traversal. In a binary search tree, search and insert compare the key with the current node and move left for a smaller key or right for a larger one.

**8. Explain the terms degree and height of a tree.**
- Degree: the number of subtrees of a node. In a binary tree it is 0, 1 or 2.
- Height (or depth): the maximum level of any node in the tree, that is, the length of the longest path from the root down to a leaf.

**9. How is a tree represented using a linked list and an array?**
- Linked list: each node holds a left pointer, the data, and a right pointer. A missing child is stored as `NULL`.
- Array: nodes are stored by position, level by level. A missing node leaves an empty slot, so with 1-based indexing the children of the node at index `i` sit at `2i` and `2i+1`. This wastes space for skewed trees.
