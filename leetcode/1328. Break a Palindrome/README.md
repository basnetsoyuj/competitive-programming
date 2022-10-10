## 1328. Break a Palindrome

`Medium`

Given a palindromic string of lowercase English letters <code>palindrome</code>, replace <strong>exactly one</strong> character with any lowercase English letter so that the resulting string is <strong>not</strong> a palindrome and that it is the <strong>lexicographically smallest</strong> one possible.

Return <em>the resulting string. If there is no way to replace a character to make it not a palindrome, return an <strong>empty string</strong>.</em>

A string <code>a</code> is lexicographically smaller than a string <code>b</code> (of the same length) if in the first position where <code>a</code> and <code>b</code> differ, <code>a</code> has a character strictly smaller than the corresponding character in <code>b</code>. For example, <code>"abcc"</code> is lexicographically smaller than <code>"abcd"</code> because the first position they differ is at the fourth character, and <code>'c'</code> is smaller than <code>'d'</code>.

---

### Examples

**Input**
```
palindrome = "abccba"
```

**Output**
```
"aaccba"
```

**Explanation**
```
There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".
Of all the ways, "aaccba" is the lexicographically smallest.
```


---

**Input**
```
palindrome = "a"
```

**Output**
```
""
```

**Explanation**
```
There is no way to replace a single character to make "a" not a palindrome, so return an empty string.
```

---

**Constraints**

<ul>
<li><code>1 &lt;= palindrome.length &lt;= 1000</code></li>
<li><code>palindrome</code> consists of only lowercase English letters.</li>
</ul>
