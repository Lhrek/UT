#ifndef _SLIDING_WINDOW_H
#define _SLIDING_WINDOW_H 

#include "header.h"

/**/
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


#endif 