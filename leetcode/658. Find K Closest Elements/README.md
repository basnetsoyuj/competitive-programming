## 658. Find K Closest Elements

`Medium`

Given a <strong>sorted</strong> integer array <code>arr</code>, two integers <code>k</code> and <code>x</code>, return the <code>k</code> closest integers to <code>x</code> in the array. The result should also be sorted in ascending order.

An integer <code>a</code> is closer to <code>x</code> than an integer <code>b</code> if:

<ul>
<li><code>|a - x| &lt; |b - x|</code>, or</li>
<li><code>|a - x| == |b - x|</code> and <code>a &lt; b</code></li>
</ul>

---

### Examples

**Input**
```
arr = [1,2,3,4,5], k = 4, x = 3
```

**Output**
```
[1,2,3,4]
```

---

**Input**
```
arr = [1,2,3,4,5], k = 4, x = -1
```

**Output**
```
[1,2,3,4]
```

---

**Constraints**

<ul>
<li><code>1 &lt;= k &lt;= arr.length</code></li>
<li><code>1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
<li><code>arr</code> is sorted in <strong>ascending</strong> order.</li>
<li><code>-10<sup>4</sup> &lt;= arr[i], x &lt;= 10<sup>4</sup></code></li>
</ul>
