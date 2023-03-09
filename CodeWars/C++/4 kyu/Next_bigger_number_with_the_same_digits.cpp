#include <string>
#include <algorithm>
long nextBigger(long n) {
  std::string s = std::to_string(n);
  return std::next_permutation(s.begin(), s.end()) ? stol(s) : -1;
}