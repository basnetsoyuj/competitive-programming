## 366. Find Leaves of Binary Tree

`Medium`

Given the <code>root</code> of a binary tree, collect a tree's nodes as if you were doing this:

<ul>
<li>Collect all the leaf nodes.</li>
<li>Remove all the leaf nodes.</li>
<li>Repeat until the tree is empty.</li>
</ul>

---

### Examples

![](remleaves-tree.jpg)

**Input**
```
root = [1,2,3,4,5]
```

**Output**
```
[[4,5,3],[2],[1]]
```

**Explanation**
```
[[3,5,4],[2],[1]] and [[3,4,5],[2],[1]] are also considered correct answers since per each level it does not matter the order on which elements are returned.
```

---

**Input**
```
root = [1]
```

**Output**
```
[[1]]
```

---

**Constraints**

<ul>
<li>The number of nodes in the tree is in the range <code>[1, 100]</code>.</li>
<li><code>-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
