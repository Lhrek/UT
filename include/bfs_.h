#ifndef __BFS_H
#define __BFS_H

#include  "header.h"
/* 200 */  
int numIslands(vector<vector<char>>& grid) {
    int ans = 0;
    for(int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == '1'){
                ans++;
                while(true){
                    //1转0
                    if(grid[i][j] == '1'){

                    }
                }

            }
        }
    }  
    return ans;     
}

#endif