## 334. Increasing Triplet Subsequence

`Medium`

Given an integer array <code>nums</code>, return <code>true</code><em> if there exists a triple of indices </em><code>(i, j, k)</code><em> such that </em><code>i &lt; j &lt; k</code><em> and </em><code>nums[i] &lt; nums[j] &lt; nums[k]</code>. If no such indices exists, return <code>false</code>.

---

### Examples

**Input**
```
nums = [1,2,3,4,5]
```

**Output**
```
true
```

**Explanation**
```
Any triplet where i < j < k is valid.
```

---

**Input**
```
nums = [5,4,3,2,1]
```

**Output**
```
false
```

**Explanation**
```
No triplet exists.
```


---

**Input**
```
nums = [2,1,5,0,4,6]
```

**Output**
```
true
```

**Explanation**
```
The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
```

---

**Constraints**

<ul>
<li><code>1 &lt;= nums.length &lt;= 5 * 10<sup>5</sup></code></li>
<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

---

**Follow up**
```
Could you implement a solution that runs in O(n) time complexity and O(1) space complexity?
```