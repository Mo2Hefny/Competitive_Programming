class Solution
{
public:
  int maxScore(vector<int> &nums)
  {
    sort(nums.rbegin(), nums.rend());
    int sum = 0;
    long long int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      n += nums[i];
      if (n > 0)
        sum++;
      else
        break;
    }

    return sum;
  }
};