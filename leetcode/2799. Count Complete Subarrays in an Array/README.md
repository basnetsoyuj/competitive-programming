
## 2789. Largest Element in an Array after Merge Operations

`Medium`

<p>You are given an array <code>nums</code> consisting of <strong>positive</strong> integers.</p>

<p>We call a subarray of an array <strong>complete</strong> if the following condition is satisfied:</p>

<ul>
	<li>The number of <strong>distinct</strong> elements in the subarray is equal to the number of distinct elements in the whole array.</li>
</ul>

<p>Return <em>the number of <strong>complete</strong> subarrays</em>.</p>

<p>A <strong>subarray</strong> is a contiguous non-empty part of an array.</p>

---

### Examples


**Input**
```
nums = [1,3,1,2,2]
```

**Output**
```
4
```

**Explanation**
```
The complete subarrays are the following: [1,3,1,2], [1,3,1,2,2], [3,1,2] and [3,1,2,2].
```

---

**Input**
```
nums = [5,5,5,5]
```

**Output**
```
10
```

**Explanation**
```
The array consists only of the integer 5, so any subarray is complete. The number of subarrays that we can choose is 10.
```

---

**Constraints**

<ul>
	<li><code>1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 2000</code></li>
</ul>