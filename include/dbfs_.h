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
int numSquares(int n) {
    
}

#endif