
## 2425. Bitwise XOR of All Pairings

`Medium`

You are given two <strong>0-indexed</strong> arrays, <code>nums1</code> and <code>nums2</code>, consisting of non-negative integers. There exists another array, <code>nums3</code>, which contains the bitwise XOR of <strong>all pairings</strong> of integers between <code>nums1</code> and <code>nums2</code> (every integer in <code>nums1</code> is paired with every integer in <code>nums2</code> <strong>exactly once</strong>).

Return<em> the <strong>bitwise XOR</strong> of all integers in </em><code>nums3</code>.

---

### Examples

**Input**
```
nums1 = [2,1,3], nums2 = [10,2,5,0]
```

**Output**
```
13
```

**Explanation**
```
A possible nums3 array is [8,0,7,2,11,3,4,1,9,1,6,3].
The bitwise XOR of all these numbers is 13, so we return 13.
```

---

**Input**
```
nums1 = [1,2], nums2 = [3,4]
```

**Output**
```
0
```

**Explanation**
```
All possible pairs of bitwise XORs are nums1[0] ^ nums2[0], nums1[0] ^ nums2[1], nums1[1] ^ nums2[0],
and nums1[1] ^ nums2[1].
Thus, one possible nums3 array is [2,5,1,6].
2 ^ 5 ^ 1 ^ 6 = 0, so we return 0.
```

---

**Constraints**

<ul>
<li><code>1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li>
<li><code>0 &lt;= nums1[i], nums2[j] &lt;= 10<sup>9</sup></code></li>
</ul>
