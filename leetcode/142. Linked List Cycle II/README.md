## 142. Linked List Cycle II

Given the `head` of a linked list, return the node where the cycle begins. *If there is no cycle*, return `null`.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to **(0-indexed)**. It is `-1` if there is no cycle. **Note that** `pos` **is not passed as a parameter**.

**Do not modify** the linked list.

### Examples

![Circular Linked List](circularlinkedlist.png)

**Input**
```
head = [3,2,0,-4], pos = 1
```

**Output**
```
tail connects to node index 1
```

**Explanation**: There is a cycle in the linked list, where tail connects to the second node.


---

![Circular Linked List](circularlinkedlist_test2.png)

**Input**
```
head = [1,2], pos = 0
```

**Output**
```
tail connects to node index 0
```

**Explanation**: There is a cycle in the linked list, where tail connects to the first node.

---

![Circular Linked List](circularlinkedlist_test3.png)

**Input**
```
head = [1], pos = -1
```

**Output**
```
no cycle
```

**Explanation**: There is no cycle in the linked list.

---

**Constraints**
* The number of the nodes in the list is in the range <code>[0, 10<sup>4</sup>]</code>
* <code>-10<sup>5</sup> <= Node.val <= 10<sup>5</sup></code>
* <code>pos</code> is `-1` or a **valid index** in the linked-list.