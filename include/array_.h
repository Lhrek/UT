#ifndef __ARRAY_H
#define __ARRAY_H

#include "header.h"

/*JZ03 Duplicate numbers in an array*/
int findDuplicate(std::vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    while (nums[i] != i) {
      if (nums[i] == nums[nums[i]])
        return nums[i];
      else {
        int temp;
        temp = nums[i];
        nums[i] = nums[nums[i]];
        nums[temp] = temp;
      }
    }
  }
  return -1;
} 

/*JZ04 find in matrix*/
bool find(int target, vector<vector<int>> &matrix) {
  if (matrix.empty() || matrix[0].empty())
    return false;
  int i = 0;
  int j = matrix[0].size() - 1;
  // 模拟二叉搜索树
  while (j >= 0 && i < matrix.size()) {
    if (matrix[i][j] > target)
      j--;
    else if (matrix[i][j] < target)
      i++;
    else
      return true;
  }
  return false;
} 

/*LC169 Majority element*/
int majorityElement(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  return nums[nums.size() / 2];
}

/*LC128 Longest continuous sequence*/
    // int longestConsecutive(vector<int>& nums) {

    // }
// [100,4,200,1,3,2]
#endif
