
## 18. 4Sum

`Medium`

Given an array <code>nums</code> of <code>n</code> integers, return <em>an array of all the <strong>unique</strong> quadruplets</em> <code>[nums[a], nums[b], nums[c], nums[d]]</code> such that:You may return the answer in <strong>any order</strong>.

---

### Examples


**Input**
```
nums = [1,0,-1,0,-2,2], target = 0
```

**Output**
```
[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```


---

**Input**
```
nums = [2,2,2,2,2], target = 8
```

**Output**
```
[[2,2,2,2]]
```


---


**Constraints**

<ul>
<li><code>0 &lt;= a, b, c, d &lt; n</code></li>
<li><code>a</code>, <code>b</code>, <code>c</code>, and <code>d</code> are <strong>distinct</strong>.</li>
<li><code>nums[a] + nums[b] + nums[c] + nums[d] == target</code></li>
</ul><ul>
<li><code>1 &lt;= nums.length &lt;= 200</code></li>
<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
<li><code>-10<sup>9</sup> &lt;= target &lt;= 10<sup>9</sup></code></li>
</ul>
