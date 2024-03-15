#ifndef _SLIDING_WINDOW_H
#define _SLIDING_WINDOW_H

#include "header.h"

/*2024.3.13 lc03*/
// 找出不含重复字符的最长字串长度
//想法：滑动窗口【begin】=【end】 begin++
int lengthOfLongestSubstring(string s) {
  int res = 0;
  if (s.size() == 1)
    return 1;
  for (int begin = 0, end = 1; end < s.size();
       end++) { // 以每一个end下标为结尾向前遍历得到的满足条件的最长字串
    if (s[begin] == s[end])
      begin++;
    res = std::max(res, end - begin + 1);
  }
  return res;
} /* bug: 形如abcdb 这种【end】重复字w符在滑动窗口中的无法处理 */



// tips for or while
#endif