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
// 暴力 超时
// int maxSubArray(vector<int> &nums) {
//   int MaxSum = -INT_MAX;
//   for (int i = 0; i < nums.size(); i++) {
//     int temp_sum = 0;
//     for (int j = i; j < nums.size(); j++) {
//       temp_sum += nums[j];
//       MaxSum = std::max(MaxSum, temp_sum);
//     }
//   }
//   return MaxSum;
// }

// 动态规划
int maxSubArray(vector<int> &nums) {
  vector<int> dp = {};
  dp.push_back(nums[0]);
  for (int i = 1; i < nums.size(); i++) {
    if (dp[i - 1] <= 0) {
      dp.push_back(nums[i]);
    } else {
      dp.push_back(dp[i - 1] + nums[i]);
    }
  }
  return *max_element(dp.begin(), dp.end());
}

#endif