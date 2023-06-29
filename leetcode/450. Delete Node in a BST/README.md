## 450. Delete Node in a BST

`Medium`

<p>Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return <em>the <strong>root node reference</strong> (possibly updated) of the BST</em>.</p>

<p>Basically, the deletion can be divided into two stages:</p>

<ol>
	<li>Search for a node to remove.</li>
	<li>If the node is found, delete the node.</li>
</ol>

---

### Examples

![](del_node_1.jpg)

**Input**
```
root = [5,3,6,2,4,null,7], key = 3
```

**Output**
```
[5,4,6,2,null,null,7]
```

**Explanation**
```
Given key to delete is 3. So we find the node with value 3 and delete it.
One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.
```

![](del_node_supp.jpg)

---

**Input**
```
root = [5,3,6,2,4,null,7], key = 0
```

**Output**
```
[5,3,6,2,4,null,7]
```

**Explanation**
```
The tree does not contain a node with value = 0.
```

---

**Input**
```
root = [], key = 0
```

**Output**
```
[]
```

---

**Constraints**

<ul>
	<li>The number of nodes in the tree is in the range <code>[0, 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li>Each node has a <strong>unique</strong> value.</li>
	<li><code>root</code> is a valid binary search tree.</li>
	<li><code>-10<sup>5</sup> &lt;= key &lt;= 10<sup>5</sup></code></li>
</ul>