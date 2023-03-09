#include <iostream>
#include <string>
#include <map>

using namespace std;

int solution(string roman) {
  map<char, int> letters = {{'I', 1},
                            {'V', 5},
                            {'X', 10},
                            {'L', 50},
                            {'C', 100},
                            {'D', 500},
                            {'M', 1000}};
  int num = letters[roman.back()];
  for (int i = 0; i < roman.size() - 1; i++)
    num += (letters[roman[i]] < letters[roman[i + 1]]) 
    ? -letters[roman[i]] : letters[roman[i]];
  return num;
}