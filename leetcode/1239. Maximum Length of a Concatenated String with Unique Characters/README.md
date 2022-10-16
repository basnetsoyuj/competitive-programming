## 1239. Maximum Length of a Concatenated String with Unique Characters

`Medium`

You are given an array of strings <code>arr</code>. A string <code>s</code> is formed by the <strong>concatenation</strong> of a <strong>subsequence</strong> of <code>arr</code> that has <strong>unique characters</strong>.

Return <em>the <strong>maximum</strong> possible length</em> of <code>s</code>.

A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

---

### Examples

**Input**
```
arr = ["un","iq","ue"]
```

**Output**
```
4
```

**Explanation**
```
All the valid concatenations are:
- ""
- "un"
- "iq"
- "ue"
- "uniq" ("un" + "iq")
- "ique" ("iq" + "ue")
Maximum length is 4.
```

---

**Input**
```
arr = ["cha","r","act","ers"]
```

**Output**
```
6
```

**Explanation**
```
Possible longest valid concatenations are "chaers" ("cha" + "ers") and "acters" ("act" + "ers").
```

---

**Input**
```
arr = ["abcdefghijklmnopqrstuvwxyz"]
```

**Output**
```
26
```

**Explanation**
```
The only string in arr has all 26 characters.
```

---

**Constraints**

<ul>
<li><code>1 &lt;= arr.length &lt;= 16</code></li>
<li><code>1 &lt;= arr[i].length &lt;= 26</code></li>
<li><code>arr[i]</code> contains only lowercase English letters.</li>
</ul>
