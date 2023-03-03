/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

// @lc code=start

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void quickSort(int *array, int low, int high)
{
  if (low < high)
  {
    int i = (low - 1);

    for (int j = low; j < high; j++)
      if (array[j] <= array[high])
      {
        i++;
        swap(&array[i], &array[j]);
      }

    swap(&array[i + 1], &array[high]);
    int pi = i + 1;

    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
  for (int i = nums1Size - 1, j = 0; i >= m && j < n; i--)
    nums1[i] = nums2[j++];
  quickSort(nums1, 0, nums1Size - 1);
}
// @lc code=end
