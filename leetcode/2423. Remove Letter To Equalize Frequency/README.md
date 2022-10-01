## 2423. Remove Letter To Equalize Frequency

`Easy`

You are given a <strong>0-indexed</strong> string <code>word</code>, consisting of lowercase English letters. You need to select <strong>one</strong> index and <strong>remove</strong> the letter at that index from <code>word</code> so that the <strong>frequency</strong> of every letter present in <code>word</code> is equal.

Return<em> </em><code>true</code><em> if it is possible to remove one letter so that the frequency of all letters in </em><code>word</code><em> are equal, and </em><code>false</code><em> otherwise</em>.

<strong>Note:</strong>

<ul>
<li>The <b>frequency</b> of a letter <code>x</code> is the number of times it occurs in the string.</li>
<li>You <strong>must</strong> remove exactly one letter and cannot chose to do nothing.</li>
</ul>

---

### Examples


**Input**
```
word = "abcc"
```

**Output**
```
true
```

**Explanation**
```
Select index 3 and delete it: word becomes "abc" and each character has a frequency of 1.
```

---

**Input**
```
word = "aazz"
```

**Output**
```
false
```

**Explanation**
```
We must delete a character, so either the frequency of "a" is 1 and the frequency of "z" is 2, or vice versa. It is impossible to make all present letters have equal frequency.
```

---

**Constraints**

<ul>
<li><code>2 &lt;= word.length &lt;= 100</code></li>
<li><code>word</code> consists of lowercase English letters only.</li>
</ul>
