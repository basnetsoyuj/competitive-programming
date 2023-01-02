## 520. Detect Capital

`Easy`

We define the usage of capitals in a word to be right when one of the following cases holds:

* All letters in this word are capitals, like `"USA"`.
* All letters in this word are not capitals, like `"leetcode"`.
* Only the first letter in this word is capital, like `"Google"`.

Given a string `word`, return `true` if the usage of capitals in it is right.

---

### Examples

<strong>Input</strong>
<pre>word = "USA"</pre>

<strong>Output</strong>
<pre>true</pre>

---

<strong>Input</strong>
<pre>word = "FlaG"</pre>

<strong>Output</strong>
<pre>false</pre>

---

**Constraints**

<ul>
    <li><code>1 <= word.length <= 100</code></li>
    <li><code>word</code> consists of lowercase and uppercase English letters.</li>
</ul>
