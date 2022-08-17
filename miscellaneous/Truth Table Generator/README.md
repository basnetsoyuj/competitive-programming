## Truth Table Generator

Given a propositional logic formula, generate a truth table. The following logical operators are allowed:

<table>
<thead>
  <tr>
    <th>Operator</th>
    <th>Symbols Allowed</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>AND</td>
    <td><code>∧ (U+2227)</code>, <code>^</code>, <code>&</code>, <code>&&</code>, <code>and</code>, <code>AND</code></td>
  </tr>
  <tr>
    <td>OR</td>
    <td><code>∨ (U+2228)</code>, <code>v</code>, <code>V</code>, <code>|</code>, <code>||</code>, <code>or</code>, <code>OR</code></td>
  </tr>
  <tr>
    <td>NOT</td>
    <td><code>~</code>, <code>¬ (U+00AC)</code>, <code>!</code>, <code>not</code>, <code>NOT</code></td>
  </tr>
  <tr>
    <td>LOGICAL CONDITIONAL</td>
    <td><code>→ (U+2192)</code>, <code>⇒ (U+21D2)</code>, <code>-></code>, <code>=></code>, <code>implies</code>, <code>IMPLIES</code></td>
  </tr>
  <tr>
    <td>LOGICAL BICONDITIONAL</td>
    <td><code>↔ (U+2194)</code>, <code>⇔ (U+21D4)</code>, <code><-></code>, <code><=></code>, <code>iff</code>, <code>IFF</code></td>
  </tr>
</tbody>
</table>

---

The truth table for each operator is given below:

### `AND` operator

<table>
<thead>
  <tr>
    <th><code>p</code></th>
    <th><code>q</code></th>
    <th><code>AND (∧)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><code>T</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>T</code></td>
    <td><code>F</code></td>
    <td><code>F</code></td>
  </tr>
      <tr>
    <td><code>F</code></td>
    <td><code>T</code></td>
    <td><code>F</code></td>
  </tr>
    <tr>
    <td><code>F</code></td>
    <td><code>F</code></td>
    <td><code>F</code></td>
  </tr>
</tbody>
</table>

### `OR` operator

<table>
<thead>
  <tr>
    <th><code>p</code></th>
    <th><code>q</code></th>
    <th><code>OR (∨)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><code>T</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>T</code></td>
    <td><code>F</code></td>
    <td><code>T</code></td>
  </tr>
      <tr>
    <td><code>F</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>F</code></td>
    <td><code>F</code></td>
    <td><code>F</code></td>
  </tr>
</tbody>
</table>

### `NOT` operator

<table>
<thead>
  <tr>
    <th><code>p</code></th>
    <th><code>NOT (~)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><code>T</code></td>
    <td><code>F</code></td>
  </tr>
  <tr>
    <td><code>F</code></td>
    <td><code>T</code></td>
  </tr>
</tbody>
</table>

### `CONDITIONAL` operator

<table>
<thead>
  <tr>
    <th><code>p</code></th>
    <th><code>q</code></th>
    <th><code>CONDITIONAL (→)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><code>T</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>T</code></td>
    <td><code>F</code></td>
    <td><code>F</code></td>
  </tr>
      <tr>
    <td><code>F</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>F</code></td>
    <td><code>F</code></td>
    <td><code>T</code></td>
  </tr>
</tbody>
</table>

### `BICONDITIONAL` operator

<table>
<thead>
  <tr>
    <th><code>p</code></th>
    <th><code>q</code></th>
    <th><code>BICONDITIONAL (↔)</code></th>
  </tr>
</thead>
<tbody>
  <tr>
    <td><code>T</code></td>
    <td><code>T</code></td>
    <td><code>T</code></td>
  </tr>
    <tr>
    <td><code>T</code></td>
    <td><code>F</code></td>
    <td><code>F</code></td>
  </tr>
      <tr>
    <td><code>F</code></td>
    <td><code>T</code></td>
    <td><code>F</code></td>
  </tr>
    <tr>
    <td><code>F</code></td>
    <td><code>F</code></td>
    <td><code>T</code></td>
  </tr>
</tbody>
</table>

---

### Examples

**Input**
```
¬p
```

**Output**
```
-------------
|  p  |  ¬p |
-------------
|  T  |  F  |
|  F  |  T  |
-------------

```

---

**Input**
```
A ^ a
```

**Outout**
```
---------------------
|  A  |  a  | A V a |
---------------------
|  T  |  T  |   T   |
|  T  |  F  |   T   |
|  F  |  T  |   T   |
|  F  |  F  |   F   |
---------------------
```

---

**Input**
```
((A -> B) ∧ (B -> C)) -> (A -> C)
```

**Outout**
```
-------------------------------------------------------
|  A  |  B  |  C  | ((A -> B) ∧ (B -> C)) -> (A -> C) |
-------------------------------------------------------
|  T  |  T  |  T  |                 T                 |
|  T  |  T  |  F  |                 T                 |
|  T  |  F  |  T  |                 T                 |
|  T  |  F  |  F  |                 T                 |
|  F  |  T  |  T  |                 T                 |
|  F  |  T  |  F  |                 T                 |
|  F  |  F  |  T  |                 T                 |
|  F  |  F  |  F  |                 T                 |
-------------------------------------------------------
```

**Explanation**
```
It is a tautology.
```

---

**Input**
```
~r -> (p -> q)
```

**Output**
```
-------------------------------------
|  p  |  q  |  r  |  ~r -> (p -> q) |
-------------------------------------
|  T  |  T  |  T  |        T        |
|  T  |  T  |  F  |        T        |
|  T  |  F  |  T  |        T        |
|  T  |  F  |  F  |        F        |
|  F  |  T  |  T  |        T        |
|  F  |  T  |  F  |        T        |
|  F  |  F  |  T  |        T        |
|  F  |  F  |  F  |        T        |
-------------------------------------
```

---

**Input**
```
((A ^ B ^ C) -> ~(A V D)) <-> E
```

**Output**
```
-----------------------------------------------------------------
|  A  |  B  |  C  |  D  |  E  | ((A ^ B ^ C) -> ~(A V D)) <-> E |
-----------------------------------------------------------------
|  T  |  T  |  T  |  T  |  T  |                F                |
|  T  |  T  |  T  |  T  |  F  |                T                |
|  T  |  T  |  T  |  F  |  T  |                F                |
|  T  |  T  |  T  |  F  |  F  |                T                |
|  T  |  T  |  F  |  T  |  T  |                T                |
|  T  |  T  |  F  |  T  |  F  |                F                |
|  T  |  T  |  F  |  F  |  T  |                T                |
|  T  |  T  |  F  |  F  |  F  |                F                |
|  T  |  F  |  T  |  T  |  T  |                T                |
|  T  |  F  |  T  |  T  |  F  |                F                |
|  T  |  F  |  T  |  F  |  T  |                T                |
|  T  |  F  |  T  |  F  |  F  |                F                |
|  T  |  F  |  F  |  T  |  T  |                T                |
|  T  |  F  |  F  |  T  |  F  |                F                |
|  T  |  F  |  F  |  F  |  T  |                T                |
|  T  |  F  |  F  |  F  |  F  |                F                |
|  F  |  T  |  T  |  T  |  T  |                T                |
|  F  |  T  |  T  |  T  |  F  |                F                |
|  F  |  T  |  T  |  F  |  T  |                T                |
|  F  |  T  |  T  |  F  |  F  |                F                |
|  F  |  T  |  F  |  T  |  T  |                T                |
|  F  |  T  |  F  |  T  |  F  |                F                |
|  F  |  T  |  F  |  F  |  T  |                T                |
|  F  |  T  |  F  |  F  |  F  |                F                |
|  F  |  F  |  T  |  T  |  T  |                T                |
|  F  |  F  |  T  |  T  |  F  |                F                |
|  F  |  F  |  T  |  F  |  T  |                T                |
|  F  |  F  |  T  |  F  |  F  |                F                |
|  F  |  F  |  F  |  T  |  T  |                T                |
|  F  |  F  |  F  |  T  |  F  |                F                |
|  F  |  F  |  F  |  F  |  T  |                T                |
|  F  |  F  |  F  |  F  |  F  |                F                |
-----------------------------------------------------------------
```

---

**Constraints**
* The statement variables are single lowercase or uppercase alphabets except `v` and `V` (used for `or` operator)
* There can be any number of variables in the range `[1, 50]`
* The program should support parenthesis `()` and `[]` to change the order of operations.

