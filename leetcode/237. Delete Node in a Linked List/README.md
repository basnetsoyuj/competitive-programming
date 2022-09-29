
## 237. Delete Node in a Linked List

`Medium`

There is a singly-linked list <code>head</code> and we want to delete a node <code>node</code> in it.

You are given the node to be deleted <code>node</code>. You will <strong>not be given access</strong> to the first node of <code>head</code>.

All the values of the linked list are <strong>unique</strong>, and it is guaranteed that the given node <code>node</code> is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

<ul>
<li>The value of the given node should not exist in the linked list.</li>
<li>The number of nodes in the linked list should decrease by one.</li>
<li>All the values before <code>node</code> should be in the same order.</li>
<li>All the values after <code>node</code> should be in the same order.</li>
</ul>

<strong>Custom testing:</strong>

<ul>
<li>For the input, you should provide the entire linked list <code>head</code> and the node to be given <code>node</code>. <code>node</code> should not be the last node of the list and should be an actual node in the list.</li>
<li>We will build the linked list and pass the node to your function.</li>
<li>The output will be the entire list after calling your function.</li>
</ul>

---

### Examples

![](node1.jpg)

**Input**
```
head = [4,5,1,9], node = 5
```

**Output**
```
[4,1,9]
```

**Explanation:**
```
You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
```

---

![](node2.jpg)

**Input**
```
head = [4,5,1,9], node = 1
```

**Output**
```
[4,5,9]
```

**Explanation:**
```
You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
```

---


**Constraints**

<ul>
<li>The number of the nodes in the given list is in the range <code>[2, 1000]</code>.</li>
<li><code>-1000 &lt;= Node.val &lt;= 1000</code></li>
<li>The value of each node in the list is <strong>unique</strong>.</li>
<li>The <code>node</code> to be deleted is <strong>in the list</strong> and is <strong>not a tail</strong> node.</li>
</ul>
