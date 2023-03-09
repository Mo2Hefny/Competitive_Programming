#include <vector>

int findOdd(const std::vector<int>& n){
  std::vector<int> numbers = n;
  std::sort(numbers.begin(), numbers.end());
  for (unsigned long i = 0, occ = 1; i < numbers.size() - 1; i++, occ++)
  {
    if (numbers[i] != numbers[i + 1])
    {
      if (occ % 2)
        return numbers[i];
      occ = 0;
    }
  }
  return numbers.back();
}