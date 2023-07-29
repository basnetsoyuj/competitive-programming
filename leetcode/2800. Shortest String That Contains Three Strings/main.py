def best(s1: str, s2: str) -> str:
    if s1 in s2:
        return s2
    elif s2 in s1:
        return s1

    ans = []
    for i in range(len(s1)):
        if s2.startswith(s1[i:]):
            ans.append(s1[:i] + s2)
            break

    for i in range(len(s2)):
        if s1.startswith(s2[i:]):
            ans.append(s2[:i] + s1)
            break

    if ans:
        # min determined first by len then by lexicographical order i.e. x itself
        return min(ans, key=lambda x: (len(x), x))
    else:
        return min(s1 + s2, s2 + s1)


class Solution:
    def minimumString(self, a: str, b: str, c: str) -> str:
        answers = [best(best(a, b), c), best(best(b, c), a), best(best(c, a), b)]
        return min(answers, key=lambda x: (len(x), x))


# -------------------------------------------------------------
# ---------------------To run the solution---------------------
# -------------------------------------------------------------
if __name__ == "__main__":
    print(Solution().minimumString("caa", "aac", "a"))
