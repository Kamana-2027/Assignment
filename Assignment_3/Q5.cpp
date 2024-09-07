//Given an integer array nums that may contain duplicates, return all possible subsets (the power set). The solution set must not contain duplicate subsets. Return the solution in any order.

#include<bits/stdc++.h>
using namespace std;
void generateSubsets(vector<int>& nums,vector<vector<int>>& result, vector<int>& current, int start) {
    result.push_back(current);
    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i - 1]) continue;
        current.push_back(nums[i]); 
        generateSubsets(nums, result, current, i + 1); 
        current.pop_back(); 
    }
}
