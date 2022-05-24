## 32. Longest Valid Parentheses

Given a string containing just the characters `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.

### Examples

**Input**
```
s = "(()"
```

**Output**
```
2
```

**Explanation**: The longest valid parentheses substring is "()".

---

**Input**
```
s = ")()())"
```

**Output**
```
4
```

**Explanation**: The longest valid parentheses substring is "()()".

---

**Input**
```
s = ""
```

**Output**
```
0
```
---

**Constraints**

* <code>0 <= s.length <= 3 * 10<sup>4</sup></code>
* `s[i]` is `'('`, or `')'`.