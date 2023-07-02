## 1493. Longest Subarray of 1's After Deleting One Element

`Medium`

<p>Given a binary array <code>nums</code>, you should delete one element from it.</p>

<p>Return <em>the size of the longest non-empty subarray containing only </em><code>1</code><em>'s in the resulting array</em>. Return <code>0</code> if there is no such subarray.</p>

---

### Examples

**Input**
```
nums = [1,1,0,1]
```

**Output**
```
3
```

**Explanation**
```
After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
```

---

**Input**
```
nums = [0,1,1,1,0,1,1,0,1]
```

**Output**
```
5
```

**Explanation**
```
After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].
```

---

**Input**
```
nums = [1,1,1]
```

**Output**
```
2
```

**Explanation**
```
You must delete one element.
```

---

**Constraints**
<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>