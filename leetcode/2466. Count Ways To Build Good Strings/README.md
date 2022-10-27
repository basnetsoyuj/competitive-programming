
## 2466. Count Ways To Build Good Strings

`Medium`

Given the integers <code>zero</code>, <code>one</code>, <code>low</code>, and <code>high</code>, we can construct a string by starting with an empty string, and then at each step perform either of the following:

<ul>
<li>Append the character <code>'0'</code> <code>zero</code> times.</li>
<li>Append the character <code>'1'</code> <code>one</code> times.</li>
</ul>

This can be performed any number of times.

A <strong>good</strong> string is a string constructed by the above process having a <strong>length</strong> between <code>low</code> and <code>high</code> (<strong>inclusive</strong>).

Return <em>the number of <strong>different</strong> good strings that can be constructed satisfying these properties.</em> Since the answer can be large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.

---

### Examples


**Input**
```
low = 3, high = 3, zero = 1, one = 1
```

**Output**
```
8
```

**Explanation**
```
One possible valid good string is "011". 
It can be constructed as follows: "" -> "0" -> "01" -> "011". 
All binary strings from "000" to "111" are good strings in this example.
```

---

**Input**
```
low = 2, high = 3, zero = 1, one = 2
```

**Output**
```
5
```

**Explanation**
```
The good strings are "00", "11", "000", "110", and "011".
```

---


**Constraints**

<ul>
<li><code>1 &lt;= low &lt;= high &lt;= 10<sup>5</sup></code></li>
<li><code>1 &lt;= zero, one &lt;= low</code></li>
</ul>
