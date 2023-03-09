#include <stddef.h>

float finduniq(const float *nums, size_t n)
{
  for (int i = 1; i < n; i++)
    if (nums[i] != nums[i - 1])
      return nums[i];
}