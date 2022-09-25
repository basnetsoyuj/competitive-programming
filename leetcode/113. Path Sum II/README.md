## 113. Path Sum II

`Medium`

Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <em>all <strong>root-to-leaf</strong> paths where the sum of the node values in the path equals </em><code>targetSum</code><em>. Each path should be returned as a list of the node <strong>values</strong>, not node references</em>.

A <strong>root-to-leaf</strong> path is a path starting from the root and ending at any leaf node. A <strong>leaf</strong> is a node with no children.

---

### Examples

![](pathsumii1.jpg)

**Input**
```
root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
```

**Output**
```
[[5,4,11,2],[5,8,4,5]]
```

**Explanation**
```
There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22
```

---

![](pathsum2.jpg)

**Input**
```
root = [1,2,3], targetSum = 5
```

**Output**
```
[]
```

---

**Input**
```
root = [1,2], targetSum = 0
```

**Output**
```
[]
```

---

**Constraints**
<ul>
    <li>The number of nodes in the tree is in the range <code>[0, 5000]</code>.</li>
    <li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
    <li><code>-1000 &lt;= targetSum &lt;= 1000</code></li>
</ul>
