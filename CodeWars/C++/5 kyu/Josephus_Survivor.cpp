int josephusSurvivor(int n, int k) {
  std::vector<int>items;
  for (int j = 0; j < n; j++) {
    items.push_back(j+1);
  }
  int i = k-1;
  while (!items.empty()){
    if(i >= items.size())
      i -= items.size();
    else {
      items.erase(items.begin() + i);
      i += k-1;
    }
  }
  return items[0];
}