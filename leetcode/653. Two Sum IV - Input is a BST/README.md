
## 653. Two Sum IV - Input is a BST

`Easy`

Given the <code>root</code> of a Binary Search Tree and a target number <code>k</code>, return <em><code>true</code> if there exist two elements in the BST such that their sum is equal to the given target</em>.

---

### Examples


![](sum_tree_1.jpg)

**Input**
```
root = [5,3,6,2,4,null,7], k = 9
```

**Output**
```
true
```


---

![](sum_tree_2.jpg)

**Input**
```
root = [5,3,6,2,4,null,7], k = 28
```

**Output**
```
false
```


---


**Constraints**

<ul>
<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
<li><code>-10<sup>4</sup> &lt;= Node.val &lt;= 10<sup>4</sup></code></li>
<li><code>root</code> is guaranteed to be a <strong>valid</strong> binary search tree.</li>
<li><code>-10<sup>5</sup> &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>
