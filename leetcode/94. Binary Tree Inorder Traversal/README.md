## 94. Binary Tree Inorder Traversal

`Easy`

Given the root of a binary tree, return **the inorder traversal of its nodes' values**.

### Examples

![Inorder Traversal](inorder_1.jpg)

**Input**
```
root = [1,null,2,3]
```

**Output**
```
[1,3,2]
```

---

**Input**
```
root = [1]
```

**Output**
```
[1]
```
---

**Input**
```
root = []
```

**Output**
```
[]
```
---

**Constraints**
* The number of nodes in the tree is in the range `[0, 100]`.
* `-100 <= Node.val <= 100`

**Follow up**: Recursive solution is trivial, could you do it iteratively?