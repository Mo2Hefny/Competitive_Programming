#
# @lc app=leetcode id=605 lang=python3
#
# [605] Can Place Flowers
#

# @lc code=start
class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        sum = 0
        i = 0
        while i < len(flowerbed):
            if (i == len(flowerbed) - 1):
                sum += flowerbed[i] == 0
                i += 1
            elif (flowerbed[i]):
                i += 2
            elif (flowerbed[i + 1] == 0):
                sum += 1
                i += 2
            else:
                i += 1
        if (n <= sum):
            return True
        return False
        
# @lc code=end

