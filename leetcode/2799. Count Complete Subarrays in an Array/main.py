from typing import List


class Solution:
    def countCompleteSubarrays(self, nums: List[int]) -> int:
        distinct = set(nums)
        counter = 0

        for i in range(len(nums)):
            seen = set()
            for j in range(i, len(nums)):
                seen.add(nums[j])
                if seen == distinct:
                    counter += 1
        return counter


# -------------------------------------------------------------
# ---------------------To run the solution---------------------
# -------------------------------------------------------------
if __name__ == "__main__":
    nums = [1, 3, 1, 2, 2]
    print(Solution().countCompleteSubarrays(nums))
