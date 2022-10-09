## 2434. Using a Robot to Print the Lexicographically Smallest String

`Medium`

You are given a string <code>s</code> and a robot that currently holds an empty string <code>t</code>. Apply one of the following operations until <code>s</code> and <code>t</code> <strong>are both empty</strong>:

<ul>
<li>Remove the <strong>first</strong> character of a string <code>s</code> and give it to the robot. The robot will append this character to the string <code>t</code>.</li>
<li>Remove the <strong>last</strong> character of a string <code>t</code> and give it to the robot. The robot will write this character on paper.</li>
</ul>

Return <em>the lexicographically smallest string that can be written on the paper.</em>

---

### Examples


**Input**
```
s = "zza"
```

**Output**
```
"azz"
```

**Explanation**
```
Let p denote the written string.
Initially p="", s="zza", t="".
Perform first operation three times p="", s="", t="zza".
Perform second operation three times p="azz", s="", t="".
```

---

**Input**
```
s = "bac"
```

**Output**
```
"abc"
```

**Explanation**
```
Let p denote the written string.
Perform first operation twice p="", s="c", t="ba". 
Perform second operation twice p="ab", s="c", t="". 
Perform first operation p="ab", s="", t="c". 
Perform second operation p="abc", s="", t="".
```

---

**Input**
```
s = "bdda"
```

**Output**
```
"addb"
```

**Explanation**
```
Let p denote the written string.
Initially p="", s="bdda", t="".
Perform first operation four times p="", s="", t="bdda".
Perform second operation four times p="addb", s="", t="".
```

---

**Constraints**

<ul>
<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
<li><code>s</code> consists of only English lowercase letters.</li>
</ul>
