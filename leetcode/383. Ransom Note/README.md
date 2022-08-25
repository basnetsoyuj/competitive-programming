## 383. Ransom Note

`Easy`

Given two strings `ransomNote` and `magazine`, *return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.*

Each letter in `magazine` can only be used once in `ransomNote`.

---

### Examples

**Input**
```
ransomNote = "a", magazine = "b"
```

**Output**
```
false
```

---

**Input**
```
ransomNote = "aa", magazine = "ab"
```

**Output**
```
false
```

---


**Input**
```
ransomNote = "aa", magazine = "aab"
```

**Output**
```
true
```

---

**Constraints**
* <code>1 <= ransomNote.length, magazine.length <= 10<sup>5</sup></code>
* `ransomNote` and `magazine` consist of lowercase English letters.