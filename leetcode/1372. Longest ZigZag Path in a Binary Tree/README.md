## 1372. Longest ZigZag Path in a Binary Tree

`Medium`

<p>You are given the <code>root</code> of a binary tree.</p>

<p>A ZigZag path for a binary tree is defined as follow:</p>

<ul>
	<li>Choose <strong>any </strong>node in the binary tree and a direction (right or left).</li>
	<li>If the current direction is right, move to the right child of the current node; otherwise, move to the left child.</li>
	<li>Change the direction from right to left or from left to right.</li>
	<li>Repeat the second and third steps until you can't move in the tree.</li>
</ul>

<p>Zigzag length is defined as the number of nodes visited - 1. (A single node has a length of 0).</p>

<p>Return <em>the longest <strong>ZigZag</strong> path contained in that tree</em>.</p>

---

### Examples

![](./sample_1_1702.png)

**Input**
```
root = [1,null,1,1,1,null,null,1,1,null,1,null,null,null,1]
```

**Output**
```
3
```

**Explanation**:
```
Longest ZigZag path in blue nodes (right -> left -> right).
```

---

![](./sample_2_1702.png)

**Input**
```
root = [1,1,1,null,1,null,null,1,1,null,1]
```

**Output**
```
4
```

**Explanation**:
```
Longest ZigZag path in blue nodes (left -> right -> left -> right).
```

---

**Input**
```
root = [1]
```

**Output**
```
0
```

---

**Constraints**

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 5 * 10<sup>4</sup>]</code>.</li>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
</ul>