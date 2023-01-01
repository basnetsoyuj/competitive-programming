## 290. Word Pattern

`Easy`

Given a `pattern` and a string `s`, find if `s` follows the same pattern.

Here **follow** means a full match, such that there is a bijection between a letter in `pattern` and a **non-empty** word in `s`.

---

### Examples

**Input**
```
pattern = "abba", s = "dog cat cat dog"
```

**Output**
```
true
```

---

**Input**
```
pattern = "abba", s = "dog cat cat fish"
```

**Output**
```
false
```

---

**Input**
```
pattern = "aaaa", s = "dog cat cat dog"
```

**Output**
```
false
```

---


**Constraints**
<ul>
	<li><code>1 &lt;= pattern.length &lt;= 300</code></li>
	<li><code>pattern</code> contains only lower-case English letters.</li>
	<li><code>1 &lt;= s.length &lt;= 3000</code></li>
	<li><code>s</code> contains only lowercase English letters and spaces <code>' '</code>.</li>
	<li><code>s</code> <strong>does not contain</strong> any leading or trailing spaces.</li>
	<li>All the words in <code>s</code> are separated by a <strong>single space</strong>.</li>
</ul>