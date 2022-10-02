## 2429. Minimize XOR

`Medium`

Given two positive integers <code>num1</code> and <code>num2</code>, find the integer <code>x</code> such that:

<ul>
<li><code>x</code> has the same number of set bits as <code>num2</code>, and</li>
<li>The value <code>x XOR num1</code> is <strong>minimal</strong>.</li>
</ul>

Note that <code>XOR</code> is the bitwise XOR operation.

Return <em>the integer </em><code>x</code>. The test cases are generated such that <code>x</code> is <strong>uniquely determined</strong>.

The number of <strong>set bits</strong> of an integer is the number of <code>1</code>'s in its binary representation.

---

### Examples


**Input**
```
num1 = 3, num2 = 5
```

**Output**
```
3
```

**Explanation**
```
The binary representations of num1 and num2 are 0011 and 0101, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.
```

---

**Input**
```
num1 = 1, num2 = 12
```

**Output**
```
3
```

**Explanation**
```
The binary representations of num1 and num2 are 0001 and 1100, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 1 = 2 is minimal.
```

---


**Constraints**

<ul>
<li><code>1 &lt;= num1, num2 &lt;= 10<sup>9</sup></code></li>
</ul>
