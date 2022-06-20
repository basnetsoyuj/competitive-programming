## 98. Validate Binary Search Tree

Given the root of a binary tree, *determine if it is a valid binary search tree (BST)*.

A **valid BST** is defined as follows:

* The left subtree of a node contains only nodes with keys **less than** the node's key.
* The right subtree of a node contains only nodes with keys **greater than** the node's key.
* Both the left and right subtrees must also be binary search trees.

### Examples

![tree1.jpg](tree1.jpg)

**Input**
```
root = [2,1,3]
```

**Output**
```
true
```

---

![tree2.jpg](tree2.jpg)

**Input**
```
root = root = [5,1,4,null,null,3,6]
```

**Output**
```
false
```

**Explanation**: The root node's value is `5` but its right child's value is `4`.

---

**Constraints**
* The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>
* <code>-2<sup>31</sup> <= Node.val <= 2<sup>31</sup> - 1</code>