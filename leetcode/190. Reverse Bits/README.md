## 190. Reverse Bits

`Easy`

Reverse bits of a given 32 bits unsigned integer.

<strong>Note:</strong>

<ul>
<li>Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.</li>
<li>In Java, the compiler represents the signed integers using <a href="https://en.wikipedia.org/wiki/Two%27s_complement" target="_blank">2's complement notation</a>. Therefore, in <strong>Example 2</strong> above, the input represents the signed integer <code>-3</code> and the output represents the signed integer <code>-1073741825</code>.</li>
</ul>

---

### Examples


**Input**
```
n = 00000010100101000001111010011100
```

**Output**
```
964176192 (00111001011110000010100101000000)
```

**Explanation:**
```
The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.
```

---

**Input**
```
n = 11111111111111111111111111111101
```

**Output**
```
3221225471 (10111111111111111111111111111111)
```

**Explanation:**
```
The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.
```

---

**Constraints**

<ul>
<li>The input must be a <strong>binary string</strong> of length <code>32</code></li>
</ul>

---

**Follow up**
* If this function is called many times, how would you optimize it?