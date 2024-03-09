#include "array_.h"
#include "header.h"
#include "string_.h"

int lengthOfLongestSubstring(string s) {
  int res = 0;
  if (s.size() == 1)
    return 1;
  for (int begin = 0, end = 1; end < s.size(); end++) {
    if (s[begin] == s[end])
      begin++;
    res = res > (end - begin + 1) ? res : (end - begin + 1);
  }
  return res;
}



int main() {
  string S = "abcabcbb";
  cout << lengthOfLongestSubstring(S);
}