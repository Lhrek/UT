#include "../include/array_.h"
#include "../include/dfs_.h"
#include "../include/sliding_window_.h"
#include "../include/string_.h"
#include "../include/temp_.h"
#include <gtest/gtest.h>

TEST(ArrayTest, xxx) {
  vector<int> vec{2, 3, 1, 0, 2, 5};
  vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                {2, 5, 8, 12, 19},
                                {3, 6, 9, 16, 22},
                                {1, 13, 14, 17, 24},
                                {1, 21, 23, 26, 30}};
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  EXPECT_EQ(findDuplicate(vec), 2);
  EXPECT_TRUE(find(5, matrix));
  EXPECT_FALSE(find(10, matrix));
  EXPECT_EQ(majorityElement(nums), 2);
}

TEST(StringTest, xxx) {
  string str = "hello world";
  EXPECT_EQ(changBlank(str), "hello%20world");
}

TEST(SildingWindow, lengthOfLongestSubstring) {
  string str1 = "abcda";
  string str2 = "pwwkew";
  string str3 = "abcabcbb";
  EXPECT_EQ(lengthOfLongestSubstring(str1), 4);
  EXPECT_EQ(lengthOfLongestSubstring(str2), 3);
  EXPECT_EQ(lengthOfLongestSubstring(str3), 3);
}

TEST(Temp, maxSubArray) {
  vector<int> vec{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  EXPECT_EQ(maxSubArray(vec), 6);
}

TEST(DFS, xxx) {
vector<vector<char>> grid1 = {
    {'1', '1', '1', '1', '0'},
    {'1', '1', '0', '1', '0'},
    {'1', '1', '0', '0', '0'},
    {'0', '0', '0', '0', '0'}
};
vector<vector<char>> grid2 = {
    {'1', '1', '0', '0', '0'},
    {'1', '1', '0', '1', '0'},
    {'0', '0', '1', '0', '0'},
    {'0', '0', '0', '1', '1'}
};
  EXPECT_EQ(numIslands(grid1), 1);
  EXPECT_EQ(numIslands(grid2), 4);

}