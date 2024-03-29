class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l, r, n, cnt, mx;
        long long res = 0;
        l = r = cnt = 0;
        mx = *max_element(nums.begin(), nums.end());
        n = nums.size();
        while (l < n) {
            while (r < n && cnt < k) {
                cnt += (nums[r++] == mx);
            }
            if (cnt >= k)
                res += n - r + 1;
            cnt -= (nums[l++] == mx);
        }
        return res;
    }
};