#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int greater = 0, total = 0;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
          if (nums[i] < nums[i + 1])
            greater = nums.size() - 1 - i - total;
          if (greater > 0)
          {
            greater--;
            total++;
          }
        }
        return total;
    }
};