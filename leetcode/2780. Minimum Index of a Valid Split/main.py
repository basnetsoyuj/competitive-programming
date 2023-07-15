from collections import Counter
from typing import List

class Solution:
    def minimumIndex(self, nums: List[int]) -> int:
        val, counts = Counter(nums).most_common(1)[0]        
        counter = 0

        for idx, elem in enumerate(nums):
            if elem == val:
                counter += 1
                
            if (counter * 2 > idx + 1) and ((counts - counter) * 2 > (len(nums) - (idx + 1))):
                return idx
        
        return -1

# -------------------------------------------------------------
# ---------------------To run the solution---------------------
# -------------------------------------------------------------
if __name__ == '__main__':
    nums = [2, 1, 3, 1, 1, 1, 7, 1, 2, 1]
    print(Solution().minimumIndex(nums))