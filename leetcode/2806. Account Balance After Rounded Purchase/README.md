
## 2806. Account Balance After Rounded Purchasey

`Easy`

<p>Initially, you have a bank account balance of <code>100</code> dollars.</p>

<p>You are given an integer <code>purchaseAmount</code> representing the amount you will spend on a purchase in dollars.</p>

<p>At the store where you will make the purchase, the purchase amount is rounded to the <strong>nearest multiple</strong> of <code>10</code>. In other words, you pay a <strong>non-negative</strong> amount, <code>roundedAmount</code>, such that <code>roundedAmount</code> is a multiple of <code>10</code> and <code>abs(roundedAmount - purchaseAmount)</code> is <strong>minimized</strong>.</p>

<p>If there is more than one nearest multiple of <code>10</code>, the <strong>largest multiple</strong> is chosen.</p>

<p>Return <em>an integer denoting your account balance after making a purchase worth </em><code>purchaseAmount</code><em> dollars from the store.</em></p>

<p><strong>Note:</strong> <code>0</code> is considered to be a multiple of <code>10</code> in this problem.</p>

---

### Examples


**Input**
```
purchaseAmount = 9
```

**Output**
```
90
```

**Explanation**
```
In this example, the nearest multiple of 10 to 9 is 10. Hence, your account balance becomes 100 - 10 = 90.
```

---

**Input**
```
purchaseAmount = 15
```

**Output**
```
80
```

**Explanation**
```
In this example, there are two nearest multiples of 10 to 15: 10 and 20. So, the larger multiple, 20, is chosen.
Hence, your account balance becomes 100 - 20 = 80.
```

---

**Constraints**

<ul>
	<li><code>0 &lt;= purchaseAmount &lt;= 100</code></li>
</ul>