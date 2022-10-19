## 167. Two Sum II - Input Array Is Sorted

`Medium`

Given a <strong>1-indexed</strong> array of integers <code>numbers</code> that is already <strong><em>sorted in non-decreasing order</em></strong>, find two numbers such that they add up to a specific <code>target</code> number. Let these two numbers be <code>numbers[index<sub>1</sub>]</code> and <code>numbers[index<sub>2</sub>]</code> where <code>1 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt;= numbers.length</code>.

Return<em> the indices of the two numbers, </em><code>index<sub>1</sub></code><em> and </em><code>index<sub>2</sub></code><em>, <strong>added by one</strong> as an integer array </em><code>[index<sub>1</sub>, index<sub>2</sub>]</code><em> of length 2.</em>

The tests are generated such that there is <strong>exactly one solution</strong>. You <strong>may not</strong> use the same element twice.

Your solution must use only constant extra space.

---

### Examples


**Input**
```
numbers = [2,7,11,15], target = 9
```

**Output**
```
[1,2]
```

**Explanation**
```
The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
```

---

**Input**
```
numbers = [2,3,4], target = 6
```

**Output**
```
[1,3]
```

**Explanation**
```
The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
```

---

**Input**
```
numbers = [-1,0], target = -1
```

**Output**
```
[1,2]
```

**Explanation**
```
The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
```

---

**Constraints**

<ul>
<li><code>2 &lt;= numbers.length &lt;= 3 * 10<sup>4</sup></code></li>
<li><code>-1000 &lt;= numbers[i] &lt;= 1000</code></li>
<li><code>numbers</code> is sorted in <strong>non-decreasing order</strong>.</li>
<li><code>-1000 &lt;= target &lt;= 1000</code></li>
<li>The tests are generated such that there is <strong>exactly one solution</strong>.</li>
</ul>
