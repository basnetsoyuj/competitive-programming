
## 2788. Split Strings by Separator

`Easy`

<p>Given an array of strings <code>words</code> and a character <code>separator</code>, <strong>split</strong> each string in <code>words</code> by <code>separator</code>.</p>

<p>Return <em>an array of strings containing the new strings formed after the splits, <strong>excluding empty strings</strong>.</em></p>

<p><strong>Notes</strong></p>

<ul>
	<li><code>separator</code> is used to determine where the split should occur, but it is not included as part of the resulting strings.</li>
	<li>A split may result in more than two strings.</li>
	<li>The resulting strings must maintain the same order as they were initially given.</li>
</ul>

---

### Examples


**Input**
```
words = ["one.two.three","four.five","six"], separator = "."
```

**Output**
```
["one","two","three","four","five","six"]
```

**Explanation**
```
In this example we split as follows:

"one.two.three" splits into "one", "two", "three"
"four.five" splits into "four", "five"
"six" splits into "six" 

Hence, the resulting array is ["one","two","three","four","five","six"].
```

---

**Input**
```
words = ["$easy$","$problem$"], separator = "$"
```

**Output**
```
["easy","problem"]
```

**Explanation**
```
In this example we split as follows: 

"$easy$" splits into "easy" (excluding empty strings)
"$problem$" splits into "problem" (excluding empty strings)

Hence, the resulting array is ["easy","problem"].
```

---

**Input**
```
words = ["|||"], separator = "|"
```

**Output**
```
[]
```

**Explanation**
```
In this example the resulting split of "|||" will contain only empty strings, so we return an empty array []. 
```

---

**Constraints**

<ul>
	<li><code>1 &lt;= words.length &lt;= 100</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 20</code></li>
	<li>characters in <code>words[i]</code> are either lowercase English letters or characters from the string <code>".,|$#@"</code> (excluding the quotes)</li>
	<li><code>separator</code> is a character from the string <code>".,|$#@"</code> (excluding the quotes)</li>
</ul>