from typing import List


class Solution:
    def splitWordsBySeparator(self, words: List[str], separator: str) -> List[str]:
        ans = []
        for word in words:
            ans.extend(word.split(separator))
        return list(filter(None, ans))
