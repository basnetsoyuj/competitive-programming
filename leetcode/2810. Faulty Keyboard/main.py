class Solution:
    def finalString(self, s: str) -> str:
        ans = ""
        for char in s:
            if char == "i":
                ans = ans[::-1]
            else:
                ans += char
        return ans
