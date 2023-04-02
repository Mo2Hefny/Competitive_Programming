class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>sum (spells.size());
        for (int i = 0; i < spells.size(); i++)
        {
            long long mn_mul = ceil((1.0 * success)/spells[i]);
            sum[i] = distance(lower_bound(potions.begin(), potions.end(), mn_mul), potions.end());
        }
        return sum;
    }
};