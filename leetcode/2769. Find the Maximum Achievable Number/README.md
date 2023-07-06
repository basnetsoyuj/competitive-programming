
## 2769. Find the Maximum Achievable Number

`Easy`

<p>You are given two integers, <code>num</code> and <code>t</code>.</p>

<p>An integer <code>x</code> is called <b>achievable</b> if it can become equal to <code>num</code> after applying the following operation no more than <code>t</code> times:</p>

<ul>
	<li>Increase or decrease <code>x</code> by <code>1</code>, and simultaneously increase or decrease <code>num</code> by <code>1</code>.</li>
</ul>

<p>Return <em>the maximum possible achievable number</em>. It can be proven that there exists at least one achievable number.</p>

---

### Examples


**Input**
```
num = 4, t = 1
```

**Output**
```
6
```

**Explanation**
```
The maximum achievable number is x = 6; it can become equal to num after performing this operation:
1- Decrease x by 1, and increase num by 1. Now, x = 5 and num = 5. 
It can be proven that there is no achievable number larger than 6.
```

---

**Input**
```
num = 3, t = 2
```

**Output**
```
7
```

**Explanation**
```
The maximum achievable number is x = 7; after performing these operations, x will equal num: 
1- Decrease x by 1, and increase num by 1. Now, x = 6 and num = 4.
2- Decrease x by 1, and increase num by 1. Now, x = 5 and num = 5.
It can be proven that there is no achievable number larger than 7.
```

---

**Constraints**

* `1 <= num, t <= 50`