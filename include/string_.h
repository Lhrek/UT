#ifndef __STRING_H
#define __STRING_H

#include "header.h"

/*JZ05 字符串中空格符替换成%20*/
string changBlank(string str) {
  std::stringstream ss(str);
  string result, word;
  string newBlank = "%20";
  while (ss >> word) {
    if (!result.empty()) {
      result += newBlank;
    }
    result += word;
  }
  return result;
}

#endif