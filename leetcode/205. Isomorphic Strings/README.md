## 205. Isomorphic Strings

Given two strings `s` and `t`, **determine if they are isomorphic**.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

---

### Examples

**Input**
```
s = "egg", t = "add"
```

**Output**
```
true
```

---

**Input**
```
s = "foo", t = "bar"
```

**Output**
```
false
```

---

**Input**
```
s = "paper", t = "title"
```

**Output**
```
true
```

---

**Constraints**
* <code> 1 <= s.length <= 5 * 10<sup>4</sup></code>
* `t.length == s.length`
* `s` and `t` consist of any valid ascii character.