## 16. 3Sum Closest

`Medium`

Given an integer array <code>nums</code> of length <code>n</code> and an integer <code>target</code>, find three integers in <code>nums</code> such that the sum is closest to <code>target</code>.

Return <em>the sum of the three integers</em>.

You may assume that each input would have exactly one solution.

---

### Examples


**Input**
```
nums = [-1,2,1,-4], target = 1
```

**Output**
```
2
```

**Explanation**
```
The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

---

**Input**
```
nums = [0,0,0], target = 1
```

**Output**
```
0
```

**Explanation**
```
The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
```

---


**Constraints**

<ul>
<li><code>3 &lt;= nums.length &lt;= 1000</code></li>
<li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li>
<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
