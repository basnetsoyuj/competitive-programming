## 72. Edit Distance

`Hard`

<p>Given two strings <code>word1</code> and <code>word2</code>, return <em>the minimum number of operations required to convert <code>word1</code> to <code>word2</code></em>.</p>

<p>You have the following three operations permitted on a word:</p>

<ul>
	<li>Insert a character</li>
	<li>Delete a character</li>
	<li>Replace a character</li>
</ul>

---

### Examples

**Input**
```
word1 = "horse", word2 = "ros"
```

**Output**
```
3
```

**Explanation**
```
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
```

---

**Input**
```
word1 = "intention", word2 = "execution"
```

**Output**
```
5
```

**Explanation**
```
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
```

---

**Constraints**
* `0 <= word1.length, word2.length <= 500`
* `word1` and `word2` consist of lowercase English letters.
