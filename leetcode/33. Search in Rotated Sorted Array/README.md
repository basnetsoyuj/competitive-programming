## 33. Search in Rotated Sorted Array

`Medium`

There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).

Prior to being passed to your function, <code>nums</code> is <strong>possibly rotated</strong> at an unknown pivot index <code>k</code> (<code>1 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.

Given the array <code>nums</code> <strong>after</strong> the possible rotation and an integer <code>target</code>, return <em>the index of </em><code>target</code><em> if it is in </em><code>nums</code><em>, or </em><code>-1</code><em> if it is not in </em><code>nums</code>.

You must write an algorithm with <code>O(log n)</code> runtime complexity.

---

### Examples

**Input**
```
nums = [4,5,6,7,0,1,2], target = 0
```

**Output**
```
4
```

---

**Input**
```
nums = [4,5,6,7,0,1,2], target = 3
```

**Output**
```
-1
```

---

**Input**
```
nums = [1], target = 0
```

**Output**
```
-1
```

---

**Constraints**

<ul>
<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
<li>All values of <code>nums</code> are <strong>unique</strong>.</li>
<li><code>nums</code> is an ascending array that is possibly rotated.</li>
<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
