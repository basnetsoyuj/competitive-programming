## 1680. Concatenation of Consecutive Binary Numbers

`Medium`

Given an integer `n`, return the **decimal value** of the binary string formed by concatenating the binary representations of `1` to `n` in order, **modulo** <code>10<sup>9</sup> + 7</code>.

---

### Examples

**Input**
```
n = 1
```

**Output**
```
1
```

**Explanation**
```
"1" in binary corresponds to the decimal value 1. 
```

---

**Input**
```
n = 3
```

**Output**
```
27
```

**Explanation**
```
In binary, 1, 2, and 3 corresponds to "1", "10", and "11".
After concatenating them, we have "11011", which corresponds to the decimal value 27.
```

---

**Input**
```
n = 12
```

**Output**
```
505379714
```

**Explanation**
```
The concatenation results in "1101110010111011110001001101010111100".
The decimal value of that is 118505380540.
After modulo 109 + 7, the result is 505379714.
```

---

**Constraints**
* <code>1 <= n <= 10<sup>5</sup></code>