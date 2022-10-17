## 1662. Check If Two String Arrays are Equivalent

`Easy`

Given two string arrays <code>word1</code> and <code>word2</code>, return<em> </em><code>true</code><em> if the two arrays <strong>represent</strong> the same string, and </em><code>false</code><em> otherwise.</em>

A string is <strong>represented</strong> by an array if the array elements concatenated <strong>in order</strong> forms the string.

---

### Examples


**Input**
```
word1 = ["ab", "c"], word2 = ["a", "bc"]
```

**Output**
```
true
```

**Explanation**
```
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
```

---

**Input**
```
word1 = ["a", "cb"], word2 = ["ab", "c"]
```

**Output**
```
false
```

---

**Input**
```
word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
```

**Output**
```
true
```

---


**Constraints**

<ul>
<li><code>1 &lt;= word1.length, word2.length &lt;= 10<sup>3</sup></code></li>
<li><code>1 &lt;= word1[i].length, word2[i].length &lt;= 10<sup>3</sup></code></li>
<li><code>1 &lt;= sum(word1[i].length), sum(word2[i].length) &lt;= 10<sup>3</sup></code></li>
<li><code>word1[i]</code> and <code>word2[i]</code> consist of lowercase letters.</li>
</ul>
