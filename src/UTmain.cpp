#include "/Users/hrek/SE/UT/include/array_.h"
#include "/Users/hrek/SE/UT/include/header.h"
#include "/Users/hrek/SE/UT/include/string_.h"
#include "/Users/hrek/SE/UT/include/temp_.h"




int main() {
  string S = "abcabcbb";
  vector<int> s = {-1,0,1,2,-1,-4};
    for (const auto &triple : threeSum(s)) {
        for (int num : triple) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}