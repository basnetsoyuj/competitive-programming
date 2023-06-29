## 162. Find Peak Element

`Medium`

<p>Given a <strong>0-indexed</strong> integer array <code>nums</code>, find a peak element, and return its index. If the array contains multiple peaks, return the index to <strong>any of the peaks</strong>.</p>

<p>You may imagine that <code>nums[-1] = nums[n] = -∞</code>. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.</p>

<p>You must write an algorithm that runs in <code>O(log n)</code> time.</p>

---

### Examples

**Input**
```
nums = [1,2,3,1]
```

**Output**
```
2
```

**Explanation**
```
3 is a peak element and your function should return the index number 2.
```

---

**Input**
```
nums = [1,2,1,3,5,6,4]
```

**Output**
```
5
```

**Explanation**
```
Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
```

---

**Constraints**

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>nums[i] != nums[i + 1]</code> for all valid <code>i</code>.</li>
</ul>