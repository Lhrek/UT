#ifndef __TEMP_H
#define __TEMP_H

#include "header.h"
/*2024.3.26 lc215*/
    int findKthLargest(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        return nums[k-1];
    }










#endif