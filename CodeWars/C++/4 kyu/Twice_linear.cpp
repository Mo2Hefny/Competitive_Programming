class DoubleLinear
{
public:
    static int dblLinear(int n);
};
int DoubleLinear::dblLinear(int n) {
  std::vector<int>u {1};
  int seq = 1;
  int ai = 0; int bi =0;
  int y; int z;
  while (ai + bi < n + seq ) {
    y = 2 * u[ai] + 1;
    z = 3 * u[bi] + 1;
    if (y < z) { u.push_back(y); ai++; }
    else if (y > z) { u.push_back(z); bi++; }
    else { u.push_back(y); ai++; bi++; seq++;}
  }
  return u[n];
}