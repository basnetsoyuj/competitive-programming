## 116. Populating Next Right Pointers in Each Node

`Medium`

You are given a <strong>perfect binary tree</strong> where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

```c
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
```

Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.

Initially, all next pointers are set to <code>NULL</code>.

---

### Examples

![](116_sample.png)

**Input**
```
root = [1,2,3,4,5,6,7]
```

**Output**
```
[1,#,2,3,#,4,5,6,7,#]
```

**Explanation:**
```
Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.
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

<ul>
<li>The number of nodes in the tree is in the range <code>[0, 2<sup>12</sup> - 1]</code>.</li>
<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>

---

**Follow-up:**
<ul>
<li>You may only use constant extra space.</li>
<li>The recursive approach is fine. You may assume implicit stack space does not count as extra space for this problem.</li>
</ul>
