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
// 小于根号n的完全平方数
vector<int> getSquaresEdge(int n) {
  vector<int> ans;
  int i = 1;
  while (i * i <= n) {
    ans.push_back(i * i);
    i++;
  }
  return ans;
}
int numSquares(int n) { 
    vector<int> squares = getSquaresEdge(n);
    queue<pair<int, int>> q; 
    q.push(make_pair(0, 0)); 
    while(!q.empty()){
      pair<int,int> cur = q.front();
      q.pop();
      if(cur.first == n) return cur.second;
      for(int i = 0; i < squares.size(); i++){
          q.push(make_pair(cur.first + squares[i], cur.second + 1));
      }
    }
    return -1;
}


#endif