class Solution
{
public:
  bool IsVowel(char c)
  {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }

  int vowelStrings(vector<string> &words, int left, int right)
  {
    int sum = 0;
    char v[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = left; i < right; i++)
    {
      if (IsVowel(words[i][0]) && IsVowel(words[i][words[i].size() - 1]))
      {
            sum++;
      }
    }
    return sum;
  }
};