
## 2789. Largest Element in an Array after Merge Operations

`Medium`

<p>You are given a <strong>0-indexed</strong> array <code>nums</code> consisting of positive integers.</p>

<p>You can do the following operation on the array <strong>any</strong> number of times:</p>

<ul>
	<li>Choose an integer <code>i</code> such that <code>0 &lt;= i &lt; nums.length - 1</code> and <code>nums[i] &lt;= nums[i + 1]</code>. Replace the element <code>nums[i + 1]</code> with <code>nums[i] + nums[i + 1]</code> and delete the element <code>nums[i]</code> from the array.</li>
</ul>

<p>Return <em>the value of the <b>largest</b> element that you can possibly obtain in the final array.</em></p>

---

### Examples


**Input**
```
nums = [2,3,7,9,3]
```

**Output**
```
21
```

**Explanation**
```
We can apply the following operations on the array:
- Choose i = 0. The resulting array will be nums = [5,7,9,3].
- Choose i = 1. The resulting array will be nums = [5,16,3].
- Choose i = 0. The resulting array will be nums = [21,3].
The largest element in the final array is 21. It can be shown that we cannot obtain a larger element.
```

---

**Input**
```
nums = [5,3,3]
```

**Output**
```
11
```

**Explanation**
```
We can do the following operations on the array:
- Choose i = 1. The resulting array will be nums = [5,6].
- Choose i = 0. The resulting array will be nums = [11].
There is only one element in the final array, which is 11.
```

---

**Constraints**

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>