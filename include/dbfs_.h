#ifndef __DBFS_H
#define __DBFS_H

#include "header.h"

/* lc200 */
void bfs_islands(vector<vector<char>> &grid, int i, int j) {
  if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() ||
      grid[i][j] == '0') {
    return;
  }
  queue<pair<int, int>> q;
  // todo
}
void dfs_islands(vector<vector<char>> &grid, int i, int j) {
  if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() ||
      grid[i][j] == '0') {
    return;
  }
  grid[i][j] = '0';
  dfs_islands(grid, i + 1, j);
  dfs_islands(grid, i - 1, j);
  dfs_islands(grid, i, j + 1);
  dfs_islands(grid, i, j - 1);
}
int numIslands(vector<vector<char>> &grid) {
  int ans = 0;
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[0].size(); j++) {
      if (grid[i][j] == '1') {
        dfs_islands(grid, i, j);
        ans++;
      }
    }
  }
  return ans;
}

/*lc279*/
// int numSquares(int n) {
//   std::vector<int> squares;
//   for (int i = 1; i * i <= n; i++) {
//     squares.push_back(i * i);
//   }
//   queue<pair<int, int>> q;
//   set<int> visited;
//   q.push(make_pair(0, 0));
//   while (!q.empty()) {
//     pair<int, int> cur = q.front();
//     q.pop();
//     if (cur.first == n)
//       return cur.second;
//     visited.insert(cur.first);
//     for (int i = 0; i < squares.size(); i++) {
//       if (visited.find(cur.first + squares[i]) != visited.end() ||
//           (cur.first + squares[i] > n))
//         continue;
//       q.push(make_pair(cur.first + squares[i], cur.second + 1));
//     }
//   }
//   return -1;
// }
/*lc279 O(N∗Sqrt(N)) */
int numSquares(int n) {
  std::vector<int> squares;
  for (int i = 1; i * i <= n; i++) {
    squares.push_back(i * i);
  }

  std::vector<bool> visited(n + 1, false);
  std::queue<std::pair<int, int>> q;
  q.push({0, 0});

  while (!q.empty()) {
    auto [curSum, steps] = q.front();
    q.pop();

    for (int square : squares) {
      int nextSum = curSum + square;
      if (nextSum == n)
        return steps + 1;
      if (nextSum > n)
        break;
      if (!visited[nextSum]) {
        visited[nextSum] = true;
        q.push({nextSum, steps + 1});
      }
    }
  }
  return -1;
}

/*lc17
2 abc
3 def
4 ghi
5 jkl
6 mno
7 pqrs
8 tuv
9 wxyz
*/
vector<string> letterCombinations(string digits) {
  if (digits.empty())
    return {};
  vector<string> ans;
  vector<string> table = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs",
                          "tuv", "wxyz"};
  for(int i = 0; i < digits.size(); i++){
    int temp = digits[i] - '0';
    string tab = table[temp];
    for(int j =0;j<tab.size();j++){
      ;
    }
  } 
}

#endif