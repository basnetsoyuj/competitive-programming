## 50. Pow(x, n)

`Medium`

Implement `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., <code>x<sup>n</sup></code>).

---

### Examples

**Input**
```
x = 2.00000, n = 10
```

**Output**
```
1024.00000
```

---

**Input**
```
x = 2.10000, n = 3
```

**Output**
```
9.26100
```

---

**Input**
```
x = 2.00000, n = -2
```

**Output**
```
0.25000
```

**Explanation**: <code>2<sup>-2</sup> = 1/2<sup>2</sup> = 1/4 = 0.25</code>

---

**Constraints**
* `-100.0 < x < 100.0`
* <code>-2<sup>31</sup> <= n <= 2<sup>31</sup>-1</code>
* <code>-10<sup>4</sup> <= x<sup>n</sup> <= 10<sup>4</sup></code>