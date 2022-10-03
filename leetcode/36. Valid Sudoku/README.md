## 36. Valid Sudoku

`Medium`

Determine if a <code>9 x 9</code> Sudoku board is valid. Only the filled cells need to be validated <strong>according to the following rules</strong>:

1. Each row must contain the digits `1-9` without repetition.
2. Each column must contain the digits `1-9` without repetition.
3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits `1-9` without repetition.

<strong>Note:</strong>

<ul>
<li>A Sudoku board (partially filled) could be valid but is not necessarily solvable.</li>
<li>Only the filled cells need to be validated according to the mentioned rules.</li>
</ul>

---

### Examples

![](250px-Sudoku-by-L2G-20050714.svg.png)

**Input**
```
board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
```

**Output**
```
true
```

---

**Input**
```
board = 
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
```

**Output**
```
false
```

**Explanation**
```
Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
```

---

**Constraints**

<ul>
<li><code>board.length == 9</code></li>
<li><code>board[i].length == 9</code></li>
<li><code>board[i][j]</code> is a digit <code>1-9</code> or <code>'.'</code>.</li>
</ul>
