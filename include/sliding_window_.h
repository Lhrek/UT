#ifndef _SLIDING_WINDOW_H
#define _SLIDING_WINDOW_H

#include "header.h"

/*2024.3.13 lc03*///////////////////////////////////////////////////////////////////////////////////
// 找出不含重复字符的最长字串长度

// 想法1：滑动窗口【begin】=【end】 begin++
// int lengthOfLongestSubstring_err1(string s) {
//   int res = 0;
//   if (s.size() == 1)
//     return 1;
//   for (int begin = 0, end = 1; end < s.size();
//        end++) { // 以每一个end下标为结尾向前遍历得到的满足条件的最长字串
//     if (s[begin] == s[end])
//       begin++;
//     res = std::max(res, end - begin + 1);
//   }
//   return res;
// } /* bug: 形如abcdb 这种【end】重复字w符在滑动窗口中的无法处理 */

// 暴力解
// int lengthOfLongestSubstring_violene(string s) {
//   int res = 0;
//   if (s.size() == 1)
//     return 1;
//   for (int i = 1; i < s.size(); i++) {
//     int temp = -1;
//     std::unordered_set<char> windows = {s[i]};
//     for (int j = i - 1; j >= 0; j--) {
//       if (windows.find(s[j]) != windows.end()) {
//         temp = windows.size();
//         break;
//       } else {
//         windows.insert(s[j]);
//         temp = windows.size();
//       }
//     }
//     res = res > temp ? res : temp;
//   }
//   return res;
// }

// 基本解 队列中有字符与s[end]相同，将队列左边界更新到重复元素的下一个位置
int lengthOfLongestSubstring(string s) {
  if (s.size() == 0) return 0;
  int temp_max = -1;
  int left = 0;
  std::unordered_set<char> windows = {};
  for (int i = 0; i < s.size(); i++) {
    while (windows.find(s[i]) != windows.end()) {
      windows.erase(s[left]);
      left++;
    }
    windows.insert(s[i]);
    temp_max = std::max(temp_max, int(windows.size()));
  }
  return temp_max;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif 