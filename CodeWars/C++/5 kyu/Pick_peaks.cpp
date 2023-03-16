#include <vector>
PeakData pick_peaks(const std::vector<int> &v) {
  PeakData result;
  bool dec = true;
  for (int i = v.size() - 2, prev = v.back(); i >= 0; i--)
  {
    if (prev > v[i] && !dec)
    {
      dec = true;
      if (i != v.size() - 2)
      {
        result.peaks.push_back(prev);  
        result.pos.push_back(i + 1);
      }
    }
    else if (prev < v[i] && dec)
      dec = false;
    prev = v[i];
  }
  reverse(result.pos.begin(), result.pos.end());
  reverse(result.peaks.begin(), result.peaks.end());
  return result;
}