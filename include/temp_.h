#ifndef __TEMP_H
#define __TEMP_H

#include "header.h"
/*2024.3.26 lc215*/
int findKthLargest(vector<int> &nums, int k) {
  std::sort(nums.begin(), nums.end(), std::greater<int>());
  return nums[k - 1];
}

/*2024.3.27 lc15*/
vector<vector<int>> threeSum(vector<int> &nums) {
  std::set<vector<int>> unique_triples;
  for (int i = 0; i < nums.size() - 2; i++) {
    for (int j = i + 1; j < nums.size() - 1; j++) {
      for (int k = j + 1; k < nums.size(); k++) {
        if (nums[i] + nums[j] + nums[k] == 0) {
          vector<int> temp = {nums[i], nums[j], nums[k]};
          std::sort(temp.begin(), temp.end());
          unique_triples.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> res(unique_triples.begin(), unique_triples.end());
  return res;
}





/*2024.3.27 lc53*/
    int maxSubArray(vector<int>& nums) {

    }

#endif