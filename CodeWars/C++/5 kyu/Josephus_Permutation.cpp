std::vector < int> josephus(std::vector < int > items, int k) {
  std::vector<int>result;
  int i = k-1;
  while (!items.empty()){
    if(i >= items.size())
      i -= items.size();
    else {
      result.push_back(items[i]);
		  items.erase(items.begin() + i);
		  i += k-1;
    }
  }
	return result;
}