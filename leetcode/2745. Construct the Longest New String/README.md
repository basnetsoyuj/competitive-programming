
## 2745. Construct the Longest New String

`Medium`

<p>You are given three integers <code>x</code>, <code>y</code>, and <code>z</code>.</p>

<p>You have <code>x</code> strings equal to <code>"AA"</code>, <code>y</code> strings equal to <code>"BB"</code>, and <code>z</code> strings equal to <code>"AB"</code>. You want to choose some (possibly all or none) of these strings and concactenate them in some order to form a new string. This new string must not contain <code>"AAA"</code> or <code>"BBB"</code> as a substring.</p>

<p>Return <em>the maximum possible length of the new string</em>.</p>

<p>A <b>substring</b> is a contiguous <strong>non-empty</strong> sequence of characters within a string.</p>

---

### Examples


**Input**
```
x = 2, y = 5, z = 1
```

**Output**
```
12
```

**Explanation**
```
We can concactenate the strings "BB", "AA", "BB", "AA", "BB", and "AB" in that order. Then, our new string is "BBAABBAABBAB". 
That string has length 12, and we can show that it is impossible to construct a string of longer length.
```

---

**Input**
```
x = 3, y = 2, z = 2
```

**Output**
```
14
```

**Explanation**
```
We can concactenate the strings "AB", "AB", "AA", "BB", "AA", "BB", and "AA" in that order. Then, our new string is "ABABAABBAABBAA". 
That string has length 14, and we can show that it is impossible to construct a string of longer length.
```

---


**Constraints**

<ul>
    <li><code>1 <= x, y, z <= 50</code></li>
</ul>
