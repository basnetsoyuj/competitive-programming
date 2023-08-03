
## 2810. Faulty Keyboard

`Easy`

<p>Your laptop keyboard is faulty, and whenever you type a character <code>'i'</code> on it, it reverses the string that you have written. Typing other characters works as expected.</p>

<p>You are given a <strong>0-indexed</strong> string <code>s</code>, and you type each character of <code>s</code> using your faulty keyboard.</p>

<p>Return <em>the final string that will be present on your laptop screen.</em></p>

---

### Examples


**Input**
```
s = "string"
```

**Output**
```
"rtsng"
```

**Explanation**
```
After typing first character, the text on the screen is "s".
After the second character, the text is "st". 
After the third character, the text is "str".
Since the fourth character is an 'i', the text gets reversed and becomes "rts".
After the fifth character, the text is "rtsn". 
After the sixth character, the text is "rtsng". 
Therefore, we return "rtsng".
```

---

**Input**
```
s = "poiinter"
```

**Output**
```
"ponter"
```

**Explanation**
```
After the first character, the text on the screen is "p".
After the second character, the text is "po". 
Since the third character you type is an 'i', the text gets reversed and becomes "op". 
Since the fourth character you type is an 'i', the text gets reversed and becomes "po".
After the fifth character, the text is "pon".
After the sixth character, the text is "pont". 
After the seventh character, the text is "ponte". 
After the eighth character, the text is "ponter". 
Therefore, we return "ponter".
```

---

**Constraints**

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
	<li><code>s[0] != 'i'</code></li>
</ul>